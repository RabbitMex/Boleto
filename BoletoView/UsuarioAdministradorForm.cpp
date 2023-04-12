#include "UsuarioAdministradorForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BoletoView::UsuarioAdministradorForm form;
	Application::Run(% form);
}