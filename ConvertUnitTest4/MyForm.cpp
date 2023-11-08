#include "Stardard.h"
#include "Scientific.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Stardard_mode::Stardard frm;
	Application::Run(% frm);
}