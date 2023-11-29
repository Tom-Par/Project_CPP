#include "LoginForm.h"
#include "DashboardForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OfficeManagementSystem::MainForm mainForm;

	mainForm.ShowDialog();
	Patient^ patient = mainForm.patient;

	if (patient != nullptr) {
		OfficeManagementSystem::MyForm myForm(patient);
		Application::Run(% myForm);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}