#pragma once
#include "User.h"
#include "Patient.h"
#include "VisitForm.h"
#include "DetailedVisitForm.h"

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
	private: System::Windows::Forms::Label^ visit_label;
	private: System::Windows::Forms::Label^ visitDetailsLabel;
	private: System::Windows::Forms::Button^ visitAddButton;
	private: System::Windows::Forms::Button^ detailedVisitAddButton;
	private: System::Windows::Forms::Button^ visitEditButton;
	private: System::Windows::Forms::Button^ detailsVisitEditButton;

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
			this->visit_label = (gcnew System::Windows::Forms::Label());
			this->visitDetailsLabel = (gcnew System::Windows::Forms::Label());
			this->visitAddButton = (gcnew System::Windows::Forms::Button());
			this->detailedVisitAddButton = (gcnew System::Windows::Forms::Button());
			this->visitEditButton = (gcnew System::Windows::Forms::Button());
			this->detailsVisitEditButton = (gcnew System::Windows::Forms::Button());
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
			this->userPanelLabel->Text = L"Panel Użytkownika";
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
			this->patientNameLabel->Size = System::Drawing::Size(45, 24);
			this->patientNameLabel->TabIndex = 1;
			this->patientNameLabel->Text = L"Imie";
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
			this->patientAgeLabel->Size = System::Drawing::Size(52, 24);
			this->patientAgeLabel->TabIndex = 1;
			this->patientAgeLabel->Text = L"Wiek";
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
			this->patientPhoneLabel->Size = System::Drawing::Size(42, 24);
			this->patientPhoneLabel->TabIndex = 1;
			this->patientPhoneLabel->Text = L"Tel.";
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
			this->patientNameTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->patientNameTextbox->Location = System::Drawing::Point(158, 135);
			this->patientNameTextbox->Name = L"patientNameTextbox";
			this->patientNameTextbox->Size = System::Drawing::Size(214, 31);
			this->patientNameTextbox->TabIndex = 2;
			// 
			// patientAgeTextbox
			// 
			this->patientAgeTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->patientAgeTextbox->Location = System::Drawing::Point(158, 184);
			this->patientAgeTextbox->Name = L"patientAgeTextbox";
			this->patientAgeTextbox->Size = System::Drawing::Size(214, 31);
			this->patientAgeTextbox->TabIndex = 2;
			// 
			// patientPhoneTextbox
			// 
			this->patientPhoneTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->patientPhoneTextbox->Location = System::Drawing::Point(158, 263);
			this->patientPhoneTextbox->Name = L"patientPhoneTextbox";
			this->patientPhoneTextbox->Size = System::Drawing::Size(214, 31);
			this->patientPhoneTextbox->TabIndex = 2;
			// 
			// patientEmailTextbox
			// 
			this->patientEmailTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->patientEmailTextbox->Location = System::Drawing::Point(158, 300);
			this->patientEmailTextbox->Name = L"patientEmailTextbox";
			this->patientEmailTextbox->Size = System::Drawing::Size(214, 31);
			this->patientEmailTextbox->TabIndex = 2;
			// 
			// insertButton
			// 
			this->insertButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->insertButton->Location = System::Drawing::Point(432, 136);
			this->insertButton->Name = L"insertButton";
			this->insertButton->Size = System::Drawing::Size(106, 38);
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
			this->dataGridView1->Location = System::Drawing::Point(32, 373);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(540, 286);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// updateButton
			// 
			this->updateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->updateButton->Location = System::Drawing::Point(432, 191);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(106, 36);
			this->updateButton->TabIndex = 3;
			this->updateButton->Text = L"Update";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->removeButton->Location = System::Drawing::Point(432, 242);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(106, 38);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &MyForm::removeButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(432, 293);
			this->clearButton->Margin = System::Windows::Forms::Padding(2);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(106, 38);
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
			this->dataGridView2->Location = System::Drawing::Point(621, 142);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(511, 229);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(621, 434);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(511, 225);
			this->dataGridView3->TabIndex = 4;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellClick);
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
			this->patientGendercomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->patientGendercomboBox->FormattingEnabled = true;
			this->patientGendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->patientGendercomboBox->Location = System::Drawing::Point(158, 222);
			this->patientGendercomboBox->Margin = System::Windows::Forms::Padding(2);
			this->patientGendercomboBox->Name = L"patientGendercomboBox";
			this->patientGendercomboBox->Size = System::Drawing::Size(214, 33);
			this->patientGendercomboBox->TabIndex = 7;
			// 
			// visit_label
			// 
			this->visit_label->AutoSize = true;
			this->visit_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->visit_label->Location = System::Drawing::Point(619, 114);
			this->visit_label->Name = L"visit_label";
			this->visit_label->Size = System::Drawing::Size(76, 25);
			this->visit_label->TabIndex = 8;
			this->visit_label->Text = L"Wizyty";
			// 
			// visitDetailsLabel
			// 
			this->visitDetailsLabel->AutoSize = true;
			this->visitDetailsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->visitDetailsLabel->Location = System::Drawing::Point(619, 406);
			this->visitDetailsLabel->Name = L"visitDetailsLabel";
			this->visitDetailsLabel->Size = System::Drawing::Size(126, 25);
			this->visitDetailsLabel->TabIndex = 9;
			this->visitDetailsLabel->Text = L"Opis Wizyty";
			// 
			// visitAddButton
			// 
			this->visitAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->visitAddButton->Location = System::Drawing::Point(1092, 103);
			this->visitAddButton->Name = L"visitAddButton";
			this->visitAddButton->Size = System::Drawing::Size(39, 33);
			this->visitAddButton->TabIndex = 10;
			this->visitAddButton->Text = L"+";
			this->visitAddButton->UseVisualStyleBackColor = true;
			this->visitAddButton->Click += gcnew System::EventHandler(this, &MyForm::visitAddButton_Click);
			// 
			// detailedVisitAddButton
			// 
			this->detailedVisitAddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->detailedVisitAddButton->Location = System::Drawing::Point(1092, 395);
			this->detailedVisitAddButton->Name = L"detailedVisitAddButton";
			this->detailedVisitAddButton->Size = System::Drawing::Size(39, 33);
			this->detailedVisitAddButton->TabIndex = 10;
			this->detailedVisitAddButton->Text = L"+";
			this->detailedVisitAddButton->UseVisualStyleBackColor = true;
			this->detailedVisitAddButton->Click += gcnew System::EventHandler(this, &MyForm::detailedVisitAddButton_Click);
			// 
			// visitEditButton
			// 
			this->visitEditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->visitEditButton->Location = System::Drawing::Point(1047, 103);
			this->visitEditButton->Name = L"visitEditButton";
			this->visitEditButton->Size = System::Drawing::Size(39, 33);
			this->visitEditButton->TabIndex = 10;
			this->visitEditButton->UseVisualStyleBackColor = true;
			this->visitEditButton->Click += gcnew System::EventHandler(this, &MyForm::visitEditButton_Click);
			// 
			// detailsVisitEditButton
			// 
			this->detailsVisitEditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->detailsVisitEditButton->Location = System::Drawing::Point(1047, 395);
			this->detailsVisitEditButton->Name = L"detailsVisitEditButton";
			this->detailsVisitEditButton->Size = System::Drawing::Size(39, 33);
			this->detailsVisitEditButton->TabIndex = 10;
			this->detailsVisitEditButton->UseVisualStyleBackColor = true;
			this->detailsVisitEditButton->Click += gcnew System::EventHandler(this, &MyForm::detailsVisitEditButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 682);
			this->Controls->Add(this->detailsVisitEditButton);
			this->Controls->Add(this->detailedVisitAddButton);
			this->Controls->Add(this->visitEditButton);
			this->Controls->Add(this->visitAddButton);
			this->Controls->Add(this->visitDetailsLabel);
			this->Controls->Add(this->visit_label);
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
			this->Text = L"Patient Manager";
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
		int id_v;
		int id_d;
		int selectedRowIndex;
		String^ treatment;
		String^ description;
		String^ prescription;

		// Main function to show data in Grid view
		void showdata() {
			String^ connString = "Data Source=LAPTOP_TOMMY\\SQLEXPRESS;Initial Catalog=users;Integrated Security=True;Encrypt=False";
			sqlConn = gcnew SqlConnection(connString); 
			sqlConn->Open();

			String^ query = "SELECT ID_P,name, age, gender, phone, email FROM patient;";
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
			// Select only information for selected patient
			String^ query = "SELECT * FROM visit WHERE patient_id=@patient_id;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			command->CommandType = CommandType::Text;
			command->Parameters->AddWithValue("@patient_id", id);

			sqlConn->Open();
			SqlDataReader^ sdr = command->ExecuteReader();
			DataTable^ tb = gcnew DataTable();
			tb->Load(sdr);
			sqlConn->Close();

			BindingSource^ bindingSource2 = gcnew BindingSource();
			bindingSource2->DataSource = tb;

			dataGridView2->DataSource = bindingSource2;
		}

		//Show detailed visit data
		void show_visit_data() {
			// Select only data for selected visit for chosen earlier patient
			String^ query = "SELECT * FROM detailed_visit WHERE visit_id=@visit_id;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			command->CommandType = CommandType::Text;
			command->Parameters->AddWithValue("@visit_id", id_v);

			sqlConn->Open();
			SqlDataReader^ sdr = command->ExecuteReader();
			DataTable^ tb = gcnew DataTable();
			tb->Load(sdr);
			sqlConn->Close();

			BindingSource^ bindingSource3 = gcnew BindingSource();
			bindingSource3->DataSource = tb;

			dataGridView3->DataSource = bindingSource3;
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
				String^ query = "INSERT INTO patient(name, age, gender, phone, email) VALUES (@name, @age, @gender, @phone, @email);";
				SqlCommand^ command = gcnew SqlCommand(query, sqlConn);

				command->CommandType = CommandType::Text;
				command->Parameters->AddWithValue("@name", patientNameTextbox->Text);
				command->Parameters->AddWithValue("@age", patientAgeTextbox->Text);
				command->Parameters->AddWithValue("@gender", patientGendercomboBox->Text);
				command->Parameters->AddWithValue("@phone", patientPhoneTextbox->Text);
				command->Parameters->AddWithValue("@email", patientEmailTextbox->Text);

				sqlConn->Open();

				command->ExecuteScalar();
				
				sqlConn->Close();
				MessageBox::Show("Data has been inserted", "Data Update", MessageBoxButtons::OK);
				showdata();
			}
		}

		// Data grid View 1 cell click
		System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			id = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value); // Update the id variable
			patientNameTextbox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			patientAgeTextbox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			patientGendercomboBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			patientPhoneTextbox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			patientEmailTextbox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
			id_v = 0;
			show_patient_data();
			show_visit_data();
		}

		// Data grid View 2 cell click
		System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			id_v = Convert::ToInt32(dataGridView2->SelectedRows[0]->Cells[0]->Value);
			show_visit_data();
		}

		// Data grid View 3 cell click
		System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			id_d = Convert::ToInt32(dataGridView2->SelectedRows[0]->Cells[0]->Value);
			treatment = dataGridView3->SelectedRows[0]->Cells[2]->Value->ToString();
			description = dataGridView3->SelectedRows[0]->Cells[3]->Value->ToString();
			prescription = dataGridView3->SelectedRows[0]->Cells[4]->Value->ToString();
			show_visit_data();
		}

		// Update button 
		System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		String^ query = "UPDATE patient SET name=@name, age=@age, gender=@gender, phone=@phone, email=@email WHERE ID_P=@id;";
		SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
		command->CommandType = CommandType::Text;
		command->Parameters->AddWithValue("@id", this->id);
		command->Parameters->AddWithValue("@name", patientNameTextbox->Text);
		command->Parameters->AddWithValue("@age", patientAgeTextbox->Text);
		command->Parameters->AddWithValue("@gender", patientGendercomboBox->Text);
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

		// Remove method
		void remove() {
			String^ query = "DELETE FROM detailed_visit WHERE visit_id IN (SELECT v1.ID_V FROM patient p INNER JOIN visit v1 ON p.ID_P = v1.patient_id WHERE p.ID_P = @id);"
				"DELETE FROM visit WHERE patient_id = @id;"
				"DELETE FROM patient WHERE ID_P = @id;";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);

			command->CommandType = CommandType::Text;
			command->Parameters->AddWithValue("@id", this->id);

			sqlConn->Open();
			command->ExecuteNonQuery();
			sqlConn->Close();
			MessageBox::Show("Data has been deleted", "Data Deleted", MessageBoxButtons::OK);
		}

		// Remove button event handler
		System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id > 0) {
		remove();
		showdata();
		show_patient_data();
		show_visit_data();
	}
	else {
		MessageBox::Show("Error", "Data update ERROR", MessageBoxButtons::OK);
	}
}

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

		// Visit Add Button
		System::Void visitAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// Make sure that patient is selected
			if (id > 0) {
				VisitForm^ visitDialog = gcnew VisitForm(sqlConn, id, false);
				visitDialog->ShowDialog();
				show_patient_data();
			}
			else {
				MessageBox::Show("Select a patient first", "Error", MessageBoxButtons::OK);
			}
		}

		//Visit Details Add Button
		System::Void detailedVisitAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (id_v > 0) {
			DetailedVisitForm^ visitDialog = gcnew DetailedVisitForm(sqlConn, id_v, nullptr, nullptr, nullptr, false);
			visitDialog->ShowDialog();
			show_visit_data();
		}
		else {
			MessageBox::Show("Select a visit first", "Error", MessageBoxButtons::OK);
		}
	}
		
		// Button to edit visit date and if visit was paid
		System::Void visitEditButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (id_v > 0) {
				VisitForm^ visitDialog = gcnew VisitForm(sqlConn, id_v, true);
				visitDialog->ShowDialog();
				show_patient_data();
			}
			else {
				MessageBox::Show("Selec a visit first", "Error", MessageBoxButtons::OK);
			}
		
		}

		// Button to edit visit details - event handler
		System::Void detailsVisitEditButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (id_d > 0) {
				DetailedVisitForm^ visitDialog = gcnew DetailedVisitForm(sqlConn, id_d,treatment, description, prescription, true);
				visitDialog->ShowDialog();
				show_visit_data();
			}
			else {
				MessageBox::Show("Select visit details first", "Error", MessageBoxButtons::OK);
			}
		}
	};

};


