#pragma once
#include "Patient.h"

namespace OfficeManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Patient^ patient)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			userInfoLabel->Text = "ID = " + patient->id + ", Name = " + patient->name +
				" , email = " + patient->email;
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
	protected:
	private: System::Windows::Forms::Label^ userInfoLabel;

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
			this->userInfoLabel = (gcnew System::Windows::Forms::Label());
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
			this->userPanelLabel->Size = System::Drawing::Size(1554, 92);
			this->userPanelLabel->TabIndex = 0;
			this->userPanelLabel->Text = L"Panel U¿ytkownika";
			this->userPanelLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userInfoLabel
			// 
			this->userInfoLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userInfoLabel->AutoSize = true;
			this->userInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->userInfoLabel->Location = System::Drawing::Point(16, 147);
			this->userInfoLabel->Name = L"userInfoLabel";
			this->userInfoLabel->Size = System::Drawing::Size(93, 33);
			this->userInfoLabel->TabIndex = 1;
			this->userInfoLabel->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1578, 917);
			this->Controls->Add(this->userInfoLabel);
			this->Controls->Add(this->userPanelLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
