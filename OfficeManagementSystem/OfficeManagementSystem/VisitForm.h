#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class VisitForm : public System::Windows::Forms::Form
{
public:
    VisitForm(SqlConnection^ sqlConn,int selectedPatientId)
    {
        this->sqlConn = sqlConn;
        this->selectedPatientId = selectedPatientId;
        InitializeComponent();
    }

    property String^ VisitDate {
        String^ get() { return visitDateTimePicker->Value.ToString("yyyy-MM-dd"); }
    }

    property bool IsPaid {
        bool get() { return paidCheckBox->Checked; }
    }

protected:
    ~VisitForm()
    {
    }

private:
    SqlConnection^ sqlConn;
    int selectedPatientId;
    System::Windows::Forms::DateTimePicker^ visitDateTimePicker;
    System::Windows::Forms::Button^ visitAddButton;
    System::Windows::Forms::CheckBox^ paidCheckBox;

    void InitializeComponent(void)
    {
        this->visitDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
        this->paidCheckBox = (gcnew System::Windows::Forms::CheckBox());
        this->visitAddButton = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // visitDateTimePicker
        // 
        this->visitDateTimePicker->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
        this->visitDateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
        this->visitDateTimePicker->Location = System::Drawing::Point(64, 40);
        this->visitDateTimePicker->Name = L"visitDateTimePicker";
        this->visitDateTimePicker->Size = System::Drawing::Size(200, 20);
        this->visitDateTimePicker->TabIndex = 0;
        // 
        // paidCheckBox
        // 
        this->paidCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->paidCheckBox->Location = System::Drawing::Point(64, 88);
        this->paidCheckBox->Name = L"paidCheckBox";
        this->paidCheckBox->Size = System::Drawing::Size(200, 40);
        this->paidCheckBox->TabIndex = 1;
        this->paidCheckBox->Text = L"Oplacone";
        // 
        // visitAddButton
        // 
        this->visitAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->visitAddButton->Location = System::Drawing::Point(260, 162);
        this->visitAddButton->Name = L"visitAddButton";
        this->visitAddButton->Size = System::Drawing::Size(75, 45);
        this->visitAddButton->TabIndex = 2;
        this->visitAddButton->Text = L"Add";
        this->visitAddButton->UseVisualStyleBackColor = true;
        this->visitAddButton->Click += gcnew System::EventHandler(this, &VisitForm::visitAddButton_Click);
        // 
        // VisitForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(347, 219);
        this->Controls->Add(this->visitAddButton);
        this->Controls->Add(this->paidCheckBox);
        this->Controls->Add(this->visitDateTimePicker);
        this->Name = L"VisitForm";
        this->Text = L"Visit Form";
        this->ResumeLayout(false);

    }

public:
    String^ GetDate() {
        return visitDateTimePicker->Value.ToString("yyyy-MM-dd");
    }
    bool isPaid() {
        return paidCheckBox->Checked;
    }

private: System::Void visitAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
    
    sqlConn->Open();

    // Przygotuj i wykonaj zapytanie SQL
    String^ query = "INSERT INTO visit(patient_id, date, is_paid) VALUES (@patient_id, @visit_date, @is_paid);";
    SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
    command->Parameters->AddWithValue("@patient_id", selectedPatientId); // Upewnij siê, ¿e selectedPatientId jest dostêpne
    command->Parameters->AddWithValue("@visit_date", VisitDate);
    command->Parameters->AddWithValue("@is_paid", IsPaid ? "Tak" : "Nie");

    command->ExecuteNonQuery();

    // Zamknij po³¹czenie z baz¹ danych
    sqlConn->Close();

    // Wyœwietl komunikat
    MessageBox::Show("Visit data has been added", "Data Update", MessageBoxButtons::OK);
    // Zamknij formularz
    this->Close();
}

};

