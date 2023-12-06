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
	User^ user = mainForm.user;

	if (user != nullptr) {
		OfficeManagementSystem::MyForm myForm(user);
		Application::Run(% myForm);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}