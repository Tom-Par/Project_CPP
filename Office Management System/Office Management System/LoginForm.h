#pragma once

namespace OfficeManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::ComboBox^ LoginComboBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ Login;


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
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->LoginComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Login = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->Location = System::Drawing::Point(217, 311);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(132, 49);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			// 
			// LoginComboBox
			// 
			this->LoginComboBox->FormattingEnabled = true;
			this->LoginComboBox->Location = System::Drawing::Point(135, 232);
			this->LoginComboBox->Name = L"LoginComboBox";
			this->LoginComboBox->Size = System::Drawing::Size(327, 21);
			this->LoginComboBox->TabIndex = 1;
			// 
			// Login
			// 
			this->Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Login->AutoSize = true;
			this->Login->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Login->Location = System::Drawing::Point(129, 185);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(94, 35);
			this->Login->TabIndex = 2;
			this->Login->Text = L"Login:";
			this->Login->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 528);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->LoginComboBox);
			this->Controls->Add(this->LoginButton);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
