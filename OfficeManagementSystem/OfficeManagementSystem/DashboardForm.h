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
			userPanelLabel->Text = "Witaj dr. " + user->name;
			
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
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ genderLabel;
	private: System::Windows::Forms::ComboBox^ patientGendercomboBox;










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
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->patientGendercomboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// userPanelLabel
			// 
			this->userPanelLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userPanelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->userPanelLabel->Location = System::Drawing::Point(6, 9);
			this->userPanelLabel->Name = L"userPanelLabel";
			this->userPanelLabel->Size = System::Drawing::Size(1149, 78);
			this->userPanelLabel->TabIndex = 0;
			this->userPanelLabel->Text = L"Panel U¿ytkownika";
			this->userPanelLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// patientNameLabel
			// 
			this->patientNameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientNameLabel->AutoSize = true;
			this->patientNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientNameLabel->Location = System::Drawing::Point(80, 142);
			this->patientNameLabel->Name = L"patientNameLabel";
			this->patientNameLabel->Size = System::Drawing::Size(61, 24);
			this->patientNameLabel->TabIndex = 1;
			this->patientNameLabel->Text = L"Name";
			// 
			// patientAgeLabel
			// 
			this->patientAgeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientAgeLabel->AutoSize = true;
			this->patientAgeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientAgeLabel->Location = System::Drawing::Point(80, 191);
			this->patientAgeLabel->Name = L"patientAgeLabel";
			this->patientAgeLabel->Size = System::Drawing::Size(45, 24);
			this->patientAgeLabel->TabIndex = 1;
			this->patientAgeLabel->Text = L"Age";
			// 
			// patientPhoneLabel
			// 
			this->patientPhoneLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientPhoneLabel->AutoSize = true;
			this->patientPhoneLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientPhoneLabel->Location = System::Drawing::Point(80, 267);
			this->patientPhoneLabel->Name = L"patientPhoneLabel";
			this->patientPhoneLabel->Size = System::Drawing::Size(66, 24);
			this->patientPhoneLabel->TabIndex = 1;
			this->patientPhoneLabel->Text = L"Phone";
			// 
			// patientEmailLabel
			// 
			this->patientEmailLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->patientEmailLabel->AutoSize = true;
			this->patientEmailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->patientEmailLabel->Location = System::Drawing::Point(80, 306);
			this->patientEmailLabel->Name = L"patientEmailLabel";
			this->patientEmailLabel->Size = System::Drawing::Size(57, 24);
			this->patientEmailLabel->TabIndex = 1;
			this->patientEmailLabel->Text = L"Email";
			// 
			// patientNameTextbox
			// 
			this->patientNameTextbox->Location = System::Drawing::Point(158, 145);
			this->patientNameTextbox->Name = L"patientNameTextbox";
			this->patientNameTextbox->Size = System::Drawing::Size(214, 20);
			this->patientNameTextbox->TabIndex = 2;
			// 
			// patientAgeTextbox
			// 
			this->patientAgeTextbox->Location = System::Drawing::Point(158, 191);
			this->patientAgeTextbox->Name = L"patientAgeTextbox";
			this->patientAgeTextbox->Size = System::Drawing::Size(214, 20);
			this->patientAgeTextbox->TabIndex = 2;
			// 
			// patientPhoneTextbox
			// 
			this->patientPhoneTextbox->Location = System::Drawing::Point(158, 269);
			this->patientPhoneTextbox->Name = L"patientPhoneTextbox";
			this->patientPhoneTextbox->Size = System::Drawing::Size(214, 20);
			this->patientPhoneTextbox->TabIndex = 2;
			// 
			// patientEmailTextbox
			// 
			this->patientEmailTextbox->Location = System::Drawing::Point(158, 308);
			this->patientEmailTextbox->Name = L"patientEmailTextbox";
			this->patientEmailTextbox->Size = System::Drawing::Size(214, 20);
			this->patientEmailTextbox->TabIndex = 2;
			// 
			// insertButton
			// 
			this->insertButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->insertButton->Location = System::Drawing::Point(432, 145);
			this->insertButton->Name = L"insertButton";
			this->insertButton->Size = System::Drawing::Size(106, 30);
			this->insertButton->TabIndex = 3;
			this->insertButton->Text = L"Insert";
			this->insertButton->UseVisualStyleBackColor = true;
			this->insertButton->Click += gcnew System::EventHandler(this, &MyForm::insertButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 398);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(540, 261);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// updateButton
			// 
			this->updateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->updateButton->Location = System::Drawing::Point(432, 198);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(106, 31);
			this->updateButton->TabIndex = 3;
			this->updateButton->Text = L"Update";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->removeButton->Location = System::Drawing::Point(432, 251);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(106, 31);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &MyForm::removeButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(432, 300);
			this->clearButton->Margin = System::Windows::Forms::Padding(2);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(106, 32);
			this->clearButton->TabIndex = 6;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(621, 103);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(511, 268);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(621, 398);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(511, 261);
			this->dataGridView3->TabIndex = 4;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// genderLabel
			// 
			this->genderLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->genderLabel->AutoSize = true;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->genderLabel->Location = System::Drawing::Point(80, 231);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(74, 24);
			this->genderLabel->TabIndex = 1;
			this->genderLabel->Text = L"Gender";
			// 
			// patientGendercomboBox
			// 
			this->patientGendercomboBox->FormattingEnabled = true;
			this->patientGendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->patientGendercomboBox->Location = System::Drawing::Point(158, 231);
			this->patientGendercomboBox->Margin = System::Windows::Forms::Padding(2);
			this->patientGendercomboBox->Name = L"patientGendercomboBox";
			this->patientGendercomboBox->Size = System::Drawing::Size(214, 21);
			this->patientGendercomboBox->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 682);
			this->Controls->Add(this->patientGendercomboBox);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->insertButton);
			this->Controls->Add(this->patientEmailTextbox);
			this->Controls->Add(this->patientPhoneTextbox);
			this->Controls->Add(this->patientAgeTextbox);
			this->Controls->Add(this->patientNameTextbox);
			this->Controls->Add(this->patientEmailLabel);
			this->Controls->Add(this->patientPhoneLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->patientAgeLabel);
			this->Controls->Add(this->patientNameLabel);
			this->Controls->Add(this->userPanelLabel);
			this->Name = L"MyForm";
			this->Text = L"Panel Pacjenta";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	
	private:
		SqlConnection^ sqlConn;
		int id;

		// Main function to show data in Grid view
		void showdata() {
			String^ connString = "Data Source=DESKTOP-NJ16N45\\SQLEXPRESS;Initial Catalog=users;Integrated Security=True;Encrypt=False";
			sqlConn = gcnew SqlConnection(connString); // Inicjalizacja sqlConn
			sqlConn->Open();

			String^ query = "SELECT ID_P,name, age, phone, email FROM patient;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			DataTable^ tb = gcnew DataTable();

			SqlDataReader^ sdr = command->ExecuteReader();
			tb->Load(sdr);

			BindingSource^ bindingSource1 = gcnew BindingSource();
			bindingSource1->DataSource = tb;

			dataGridView1->DataSource = bindingSource1;
			sqlConn->Close();
		}
		
		// Second function to separate and chose detailed data about selected patient
		void show_patient_data() {
			String^ connString = "Data Source=DESKTOP-NJ16N45\\SQLEXPRESS;Initial Catalog=users;Integrated Security=True;Encrypt=False";
			sqlConn = gcnew SqlConnection(connString); // Inicjalizacja sqlConn
			sqlConn->Open();

			String^ query = "SELECT * FROM patient_data;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			DataTable^ tb = gcnew DataTable();
			 
			SqlDataReader^ sdr = command->ExecuteReader();
			tb->Load(sdr);

			BindingSource^ bindingSource2 = gcnew BindingSource();
			bindingSource2->DataSource = tb;

			dataGridView2->DataSource = bindingSource2;
			sqlConn->Close();

		}

		// Form load
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			showdata();
		}

		// Insert button
		System::Void insertButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (patientNameLabel->Text == String::Empty) {
				MessageBox::Show("Insert Name", "Name Error", MessageBoxButtons::OK);
			}
			else {
				String^ query = "INSERT INTO patient(name, age, phone, email) OUTPUT INSERTED.ID_P VALUES (@name, @age, @phone, @email);";
				String^ query_patient_data = "INSERT INTO patient_data(p_id, gender) VALUES (@p_id, @gender);";
				SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
				SqlCommand^ command2 = gcnew SqlCommand(query_patient_data, sqlConn);

				command->CommandType = CommandType::Text;
				command->Parameters->AddWithValue("@name", patientNameTextbox->Text);
				command->Parameters->AddWithValue("@age", patientAgeTextbox->Text);
				command->Parameters->AddWithValue("@phone", patientPhoneTextbox->Text);
				command->Parameters->AddWithValue("@email", patientEmailTextbox->Text);

				command2->CommandType = CommandType::Text;
				command2->Parameters->AddWithValue("@gender", patientGendercomboBox->Text);

				sqlConn->Open();

				// Execute the first query and retrieve the last inserted ID directly
				int lastId = Convert::ToInt32(command->ExecuteScalar());

				// Use the retrieved ID in the second query
				command2->Parameters->AddWithValue("@p_id", lastId);
				command2->ExecuteNonQuery();

				sqlConn->Close();
				MessageBox::Show("Data has been inserted", "Data Update", MessageBoxButtons::OK);
				showdata();
			}
		}

	// Data grid View cell click
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		id = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		patientNameTextbox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		patientAgeTextbox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		patientPhoneTextbox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		patientEmailTextbox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		show_patient_data();


	}

	// Update button 
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		String^ query = "UPDATE patient SET name=@name, age=@age, phone=@phone, email=@email WHERE ID_P=@id;";
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

	// Remove button
	private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		String^ query = "DELETE FROM patient WHERE ID_P=@id;";
		String^ query_patient_data = "DELETE FROM patient_data WHERE p_id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
		SqlCommand^ command2 = gcnew SqlCommand(query_patient_data, sqlConn);
		command->CommandType = CommandType::Text;
		command->Parameters->AddWithValue("@id", this->id);
		command2->CommandType = CommandType::Text;
		command2->Parameters->AddWithValue("@id", this->id);
		sqlConn->Open();
		command->ExecuteNonQuery();
		command2->ExecuteNonQuery();
		sqlConn->Close();
		MessageBox::Show("Data has been deleted", "Data Deleted", MessageBoxButtons::OK);
		showdata();
	}
	else {
		MessageBox::Show("Error", "Data update ERROR", MessageBoxButtons::OK);
	}
}

private: 

	// Function responsible for clearing all text boxes
	void clear() {
		patientNameTextbox->Text = "";
		patientAgeTextbox->Text = "";
		patientPhoneTextbox->Text = "";
		patientEmailTextbox->Text = "";
		patientGendercomboBox->Text = "";
	}

	// Clera button
	System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
}
};

};


