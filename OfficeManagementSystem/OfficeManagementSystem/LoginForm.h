#pragma once
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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::TextBox^ emailTextBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Label^ emailLabel;

	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ cancelButton;



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
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->loginLabel->Location = System::Drawing::Point(12, 9);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(452, 64);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Login";
			this->loginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// emailTextBox
			// 
			this->emailTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->emailTextBox->Location = System::Drawing::Point(163, 126);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(277, 20);
			this->emailTextBox->TabIndex = 1;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->passwordLabel->Location = System::Drawing::Point(14, 195);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(143, 33);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passwordTextBox->Location = System::Drawing::Point(163, 208);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(277, 20);
			this->passwordTextBox->TabIndex = 3;
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->emailLabel->Location = System::Drawing::Point(14, 113);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(89, 33);
			this->emailLabel->TabIndex = 4;
			this->emailLabel->Text = L"Email";
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->loginButton->Location = System::Drawing::Point(163, 304);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(121, 50);
			this->loginButton->TabIndex = 5;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MainForm::loginButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cancelButton->Location = System::Drawing::Point(321, 304);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(119, 50);
			this->cancelButton->TabIndex = 5;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &MainForm::cancelButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 445);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->loginLabel);
			this->Name = L"MainForm";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Patient^ patient = nullptr;

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->emailTextBox->Text;
		String^ password = this -> passwordTextBox->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password empty",MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source = D:\\Github Repositories\\Project_CPP\\OfficeManagementSystem\\Database.db;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				patient = gcnew Patient;
				patient->id = reader->GetInt32(0);
				patient->name = reader->GetString(1);
				this->Close();
			}
			else {
				MessageBox::Show("Email or Password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (System::Data::SqlClient::SqlException^ ex) {
			MessageBox::Show(ex->Message, "SQL Exception", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Exception", MessageBoxButtons::OK);
		}
	}

};
}
