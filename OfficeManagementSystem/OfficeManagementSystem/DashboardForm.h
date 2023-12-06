#pragma once
#include "User.h"
#include "Patient.h"

namespace OfficeManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userPanelLabel->Text = "Witaj " + user->name;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ userPanelLabel;
	private: System::Windows::Forms::Label^ patientNameLabel;
	private: System::Windows::Forms::Label^ patientAgeLabel;
	private: System::Windows::Forms::Label^ patientPhoneLabel;
	private: System::Windows::Forms::Label^ patientEmailLabel;
	private: System::Windows::Forms::TextBox^ patientNameTextbox;
	private: System::Windows::Forms::TextBox^ patientAgeTextbox;
	private: System::Windows::Forms::TextBox^ patientPhoneTextbox;
	private: System::Windows::Forms::TextBox^ patientEmailTextbox;
	private: System::Windows::Forms::Button^ insertButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::Button^ removeButton;









	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->userPanelLabel = (gcnew System::Windows::Forms::Label());
			this->patientNameLabel = (gcnew System::Windows::Forms::Label());
			this->patientAgeLabel = (gcnew System::Windows::Forms::Label());
			this->patientPhoneLabel = (gcnew System::Windows::Forms::Label());
			this->patientEmailLabel = (gcnew System::Windows::Forms::Label());
			this->patientNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->patientAgeTextbox = (gcnew System::Windows::Forms::TextBox());
			this->patientPhoneTextbox = (gcnew System::Windows::Forms::TextBox());
			this->patientEmailTextbox = (gcnew System::Windows::Forms::TextBox());
			this->insertButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// userPanelLabel
			// 
			this->userPanelLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userPanelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->userPanelLabel->Location = System::Drawing::Point(12, 9);
			this->userPanelLabel->Name = L"userPanelLabel";
			this->userPanelLabel->Size = System::Drawing::Size(754, 92);
			this->userPanelLabel->TabIndex = 0;
			this->userPanelLabel->Text = L"Panel U¿ytkownika";
			this->userPanelLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// patientNameLabel
			// 
			this->patientNameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientNameLabel->AutoSize = true;
			this->patientNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientNameLabel->Location = System::Drawing::Point(16, 147);
			this->patientNameLabel->Name = L"patientNameLabel";
			this->patientNameLabel->Size = System::Drawing::Size(93, 33);
			this->patientNameLabel->TabIndex = 1;
			this->patientNameLabel->Text = L"Name";
			// 
			// patientAgeLabel
			// 
			this->patientAgeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientAgeLabel->AutoSize = true;
			this->patientAgeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientAgeLabel->Location = System::Drawing::Point(16, 199);
			this->patientAgeLabel->Name = L"patientAgeLabel";
			this->patientAgeLabel->Size = System::Drawing::Size(66, 33);
			this->patientAgeLabel->TabIndex = 1;
			this->patientAgeLabel->Text = L"Age";
			// 
			// patientPhoneLabel
			// 
			this->patientPhoneLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientPhoneLabel->AutoSize = true;
			this->patientPhoneLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientPhoneLabel->Location = System::Drawing::Point(16, 256);
			this->patientPhoneLabel->Name = L"patientPhoneLabel";
			this->patientPhoneLabel->Size = System::Drawing::Size(98, 33);
			this->patientPhoneLabel->TabIndex = 1;
			this->patientPhoneLabel->Text = L"Phone";
			// 
			// patientEmailLabel
			// 
			this->patientEmailLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientEmailLabel->AutoSize = true;
			this->patientEmailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientEmailLabel->Location = System::Drawing::Point(16, 318);
			this->patientEmailLabel->Name = L"patientEmailLabel";
			this->patientEmailLabel->Size = System::Drawing::Size(89, 33);
			this->patientEmailLabel->TabIndex = 1;
			this->patientEmailLabel->Text = L"Email";
			// 
			// patientNameTextbox
			// 
			this->patientNameTextbox->Location = System::Drawing::Point(186, 159);
			this->patientNameTextbox->Name = L"patientNameTextbox";
			this->patientNameTextbox->Size = System::Drawing::Size(214, 20);
			this->patientNameTextbox->TabIndex = 2;
			// 
			// patientAgeTextbox
			// 
			this->patientAgeTextbox->Location = System::Drawing::Point(186, 212);
			this->patientAgeTextbox->Name = L"patientAgeTextbox";
			this->patientAgeTextbox->Size = System::Drawing::Size(214, 20);
			this->patientAgeTextbox->TabIndex = 2;
			// 
			// patientPhoneTextbox
			// 
			this->patientPhoneTextbox->Location = System::Drawing::Point(186, 269);
			this->patientPhoneTextbox->Name = L"patientPhoneTextbox";
			this->patientPhoneTextbox->Size = System::Drawing::Size(214, 20);
			this->patientPhoneTextbox->TabIndex = 2;
			// 
			// patientEmailTextbox
			// 
			this->patientEmailTextbox->Location = System::Drawing::Point(186, 331);
			this->patientEmailTextbox->Name = L"patientEmailTextbox";
			this->patientEmailTextbox->Size = System::Drawing::Size(214, 20);
			this->patientEmailTextbox->TabIndex = 2;
			// 
			// insertButton
			// 
			this->insertButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->insertButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->insertButton->Location = System::Drawing::Point(160, 507);
			this->insertButton->Name = L"insertButton";
			this->insertButton->Size = System::Drawing::Size(105, 46);
			this->insertButton->TabIndex = 3;
			this->insertButton->Text = L"Insert";
			this->insertButton->UseVisualStyleBackColor = true;
			this->insertButton->Click += gcnew System::EventHandler(this, &MyForm::insertButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 572);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(754, 333);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// updateButton
			// 
			this->updateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->updateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->updateButton->Location = System::Drawing::Point(345, 507);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(114, 46);
			this->updateButton->TabIndex = 3;
			this->updateButton->Text = L"Update";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->removeButton->Location = System::Drawing::Point(508, 507);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(124, 46);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &MyForm::removeButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 917);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->insertButton);
			this->Controls->Add(this->patientEmailTextbox);
			this->Controls->Add(this->patientPhoneTextbox);
			this->Controls->Add(this->patientAgeTextbox);
			this->Controls->Add(this->patientNameTextbox);
			this->Controls->Add(this->patientEmailLabel);
			this->Controls->Add(this->patientPhoneLabel);
			this->Controls->Add(this->patientAgeLabel);
			this->Controls->Add(this->patientNameLabel);
			this->Controls->Add(this->userPanelLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	
	private:
		SqlConnection^ sqlConn;
		int id;
		void showdata() {
			String^ connString = "Data Source=DESKTOP-NJ16N45\\SQLEXPRESS;Initial Catalog=users;Integrated Security=True;Encrypt=False";
			sqlConn = gcnew SqlConnection(connString); // Inicjalizacja sqlConn
			sqlConn->Open();

			String^ query = "SELECT * FROM patient;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			DataTable^ tb = gcnew DataTable();

			SqlDataReader^ sdr = command->ExecuteReader();
			tb->Load(sdr);

			BindingSource^ bindingSource1 = gcnew BindingSource();
			bindingSource1->DataSource = tb;

			dataGridView1->DataSource = bindingSource1;

			sqlConn->Close();
		}

		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			showdata();
		}

		System::Void insertButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (patientNameLabel->Text == String::Empty) {
				MessageBox::Show("Insert Name", "Name Error", MessageBoxButtons::OK);
			}
			else {
				String^ query = "INSERT INTO patient(name, age, phone, email) VALUES ( @name, @age, @phone, @email);";
				SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
				command->CommandType = CommandType::Text;
				//int age = Int32::Parse(patientAgeLabel->Text);
				//int phone = Int32::Parse(patientPhoneLabel->Text);
				command->Parameters->AddWithValue("@name", patientNameTextbox->Text);
				command->Parameters->AddWithValue("@age", patientAgeTextbox->Text);
				command->Parameters->AddWithValue("@phone", patientPhoneTextbox->Text);
				command->Parameters->AddWithValue("@email", patientEmailTextbox->Text);
				sqlConn->Open();
				command->ExecuteNonQuery();
				sqlConn->Close();
				MessageBox::Show("Data has been inserted", "Data Update", MessageBoxButtons::OK);
				showdata();
				}
		}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		id = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		patientNameTextbox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		patientAgeTextbox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		patientPhoneTextbox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		patientEmailTextbox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();

	}
private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		String^ query = "UPDATE patient SET name=@name, age=@age, phone=@phone, email=@email WHERE ID=@id;";
		SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
		command->CommandType = CommandType::Text;
		command->Parameters->AddWithValue("@id", this->id);
		command->Parameters->AddWithValue("@name", patientNameTextbox->Text);
		command->Parameters->AddWithValue("@age", patientAgeTextbox->Text);
		command->Parameters->AddWithValue("@phone", patientPhoneTextbox->Text);
		command->Parameters->AddWithValue("@email", patientEmailTextbox->Text);
		sqlConn->Open();
		command->ExecuteNonQuery();
		sqlConn->Close();
		MessageBox::Show("Data has been Updated", "Data Updated Successfully", MessageBoxButtons::OK);
		showdata();
	}
	else {
		MessageBox::Show("Error", "Data update ERROR", MessageBoxButtons::OK);
	}
}
private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		String^ query = "DELETE FROM patient WHERE ID=@id;";
		SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
		command->CommandType = CommandType::Text;
		command->Parameters->AddWithValue("@id", this->id);
		sqlConn->Open();
		command->ExecuteNonQuery();
		sqlConn->Close();
		MessageBox::Show("Data has been deleted", "Data Deleted", MessageBoxButtons::OK);
		showdata();
	}
	else {
		MessageBox::Show("Error", "Data update ERROR", MessageBoxButtons::OK);
	}
}
};

};


