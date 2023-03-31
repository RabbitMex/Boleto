#include "TrabajadorForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BoletoView::TrabajadorForm form;
	Application::Run(% form);
}
