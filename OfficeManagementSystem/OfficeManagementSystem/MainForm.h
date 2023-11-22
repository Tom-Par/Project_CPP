#pragma once

namespace OfficeManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ userNameLabel;
	protected:
	private: System::Windows::Forms::TextBox^ userNameTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;

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
			this->userNameLabel = (gcnew System::Windows::Forms::Label());
			this->userNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// userNameLabel
			// 
			this->userNameLabel->AutoSize = true;
			this->userNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->userNameLabel->Location = System::Drawing::Point(98, 65);
			this->userNameLabel->Name = L"userNameLabel";
			this->userNameLabel->Size = System::Drawing::Size(171, 38);
			this->userNameLabel->TabIndex = 0;
			this->userNameLabel->Text = L"User Name";
			// 
			// userNameTextBox
			// 
			this->userNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userNameTextBox->Location = System::Drawing::Point(105, 107);
			this->userNameTextBox->Name = L"userNameTextBox";
			this->userNameTextBox->Size = System::Drawing::Size(217, 20);
			this->userNameTextBox->TabIndex = 1;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->passwordLabel->Location = System::Drawing::Point(105, 171);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(143, 33);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passwordTextBox->Location = System::Drawing::Point(105, 208);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(217, 20);
			this->passwordTextBox->TabIndex = 3;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 440);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->userNameTextBox);
			this->Controls->Add(this->userNameLabel);
			this->Name = L"MainForm";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
