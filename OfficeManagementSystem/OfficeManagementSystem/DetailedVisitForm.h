#pragma once

namespace OfficeManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetailedVisitForm
	/// </summary>
	public ref class DetailedVisitForm : public System::Windows::Forms::Form
	{
	public:
		DetailedVisitForm(void)
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
		~DetailedVisitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ treatmentTextBox;
	protected:
	private: System::Windows::Forms::Label^ treatmentLabel;
	private: System::Windows::Forms::Label^ descriptionLabel;
	private: System::Windows::Forms::Label^ prescriptionLabel;
	private: System::Windows::Forms::TextBox^ descriptionTextBox;
	private: System::Windows::Forms::TextBox^ prescriptionTextBox;
	private: System::Windows::Forms::Button^ detailedVisitFormAddButton;


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
			this->treatmentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->treatmentLabel = (gcnew System::Windows::Forms::Label());
			this->descriptionLabel = (gcnew System::Windows::Forms::Label());
			this->prescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->descriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->prescriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->detailedVisitFormAddButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// treatmentTextBox
			// 
			this->treatmentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->treatmentTextBox->Location = System::Drawing::Point(32, 60);
			this->treatmentTextBox->Name = L"treatmentTextBox";
			this->treatmentTextBox->Size = System::Drawing::Size(420, 31);
			this->treatmentTextBox->TabIndex = 0;
			// 
			// treatmentLabel
			// 
			this->treatmentLabel->AutoSize = true;
			this->treatmentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->treatmentLabel->Location = System::Drawing::Point(27, 32);
			this->treatmentLabel->Name = L"treatmentLabel";
			this->treatmentLabel->Size = System::Drawing::Size(78, 25);
			this->treatmentLabel->TabIndex = 1;
			this->treatmentLabel->Text = L"Zabieg";
			// 
			// descriptionLabel
			// 
			this->descriptionLabel->AutoSize = true;
			this->descriptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->descriptionLabel->Location = System::Drawing::Point(27, 150);
			this->descriptionLabel->Name = L"descriptionLabel";
			this->descriptionLabel->Size = System::Drawing::Size(56, 25);
			this->descriptionLabel->TabIndex = 1;
			this->descriptionLabel->Text = L"Opis";
			// 
			// prescriptionLabel
			// 
			this->prescriptionLabel->AutoSize = true;
			this->prescriptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->prescriptionLabel->Location = System::Drawing::Point(27, 264);
			this->prescriptionLabel->Name = L"prescriptionLabel";
			this->prescriptionLabel->Size = System::Drawing::Size(92, 25);
			this->prescriptionLabel->TabIndex = 1;
			this->prescriptionLabel->Text = L"Recepta";
			// 
			// descriptionTextBox
			// 
			this->descriptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->descriptionTextBox->Location = System::Drawing::Point(32, 178);
			this->descriptionTextBox->Name = L"descriptionTextBox";
			this->descriptionTextBox->Size = System::Drawing::Size(420, 31);
			this->descriptionTextBox->TabIndex = 0;
			// 
			// prescriptionTextBox
			// 
			this->prescriptionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->prescriptionTextBox->Location = System::Drawing::Point(32, 292);
			this->prescriptionTextBox->Name = L"prescriptionTextBox";
			this->prescriptionTextBox->Size = System::Drawing::Size(420, 31);
			this->prescriptionTextBox->TabIndex = 0;
			// 
			// detailedVisitFormAddButton
			// 
			this->detailedVisitFormAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->detailedVisitFormAddButton->Location = System::Drawing::Point(376, 363);
			this->detailedVisitFormAddButton->Name = L"detailedVisitFormAddButton";
			this->detailedVisitFormAddButton->Size = System::Drawing::Size(76, 46);
			this->detailedVisitFormAddButton->TabIndex = 2;
			this->detailedVisitFormAddButton->Text = L"Add";
			this->detailedVisitFormAddButton->UseVisualStyleBackColor = true;
			// 
			// DetailedVisitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 445);
			this->Controls->Add(this->detailedVisitFormAddButton);
			this->Controls->Add(this->prescriptionLabel);
			this->Controls->Add(this->descriptionLabel);
			this->Controls->Add(this->treatmentLabel);
			this->Controls->Add(this->prescriptionTextBox);
			this->Controls->Add(this->descriptionTextBox);
			this->Controls->Add(this->treatmentTextBox);
			this->Name = L"DetailedVisitForm";
			this->Text = L"DetailedVisitForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
