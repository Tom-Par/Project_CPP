#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OfficeManagementSystem::MainForm form;
	Application::Run(% form);
}