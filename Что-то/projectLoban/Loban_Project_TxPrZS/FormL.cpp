#pragma once
#include "FormL.h"
#include "MainForm.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LobanProjectTxPrZS::FormL loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		LobanProjectTxPrZS::MainForm mainForm(user);
		Application::Run(% mainForm);

		LobanProjectTxPrZS::MyForm mainForm2;
		Application::Run(% mainForm2);
	}
	else {
		MessageBox::Show("Authentication was Canceled",
			"Information about program", MessageBoxButtons::OK);
	}
}