#include "PasajeroForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BoletoView::PasajeroForm form;
	Application::Run(% form);
}