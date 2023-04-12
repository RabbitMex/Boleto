#pragma once

#include "PasajeroForm.h"
#include "TrabajadorForm.h"
#include "ViajeForm.h"

namespace BoletoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UsuarioAdministradorForm
	/// </summary>
	public ref class UsuarioAdministradorForm : public System::Windows::Forms::Form
	{
	public:
		UsuarioAdministradorForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UsuarioAdministradorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ pasajerosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ conductorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viajeToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pasajerosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conductorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pasajerosToolStripMenuItem,
					this->trabajadoresToolStripMenuItem, this->viajeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(593, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pasajerosToolStripMenuItem
			// 
			this->pasajerosToolStripMenuItem->Name = L"pasajerosToolStripMenuItem";
			this->pasajerosToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->pasajerosToolStripMenuItem->Text = L"Pasajeros";
			this->pasajerosToolStripMenuItem->Click += gcnew System::EventHandler(this, &UsuarioAdministradorForm::pasajerosToolStripMenuItem_Click);
			// 
			// trabajadoresToolStripMenuItem
			// 
			this->trabajadoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->vendedorToolStripMenuItem,
					this->administradorToolStripMenuItem, this->conductorToolStripMenuItem
			});
			this->trabajadoresToolStripMenuItem->Name = L"trabajadoresToolStripMenuItem";
			this->trabajadoresToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->trabajadoresToolStripMenuItem->Text = L"Trabajadores";
			// 
			// vendedorToolStripMenuItem
			// 
			this->vendedorToolStripMenuItem->Name = L"vendedorToolStripMenuItem";
			this->vendedorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->vendedorToolStripMenuItem->Text = L"Vendedor";
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			// 
			// conductorToolStripMenuItem
			// 
			this->conductorToolStripMenuItem->Name = L"conductorToolStripMenuItem";
			this->conductorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->conductorToolStripMenuItem->Text = L"Conductor";
			// 
			// viajeToolStripMenuItem
			// 
			this->viajeToolStripMenuItem->Name = L"viajeToolStripMenuItem";
			this->viajeToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viajeToolStripMenuItem->Text = L"Viaje";
			// 
			// UsuarioAdministradorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 344);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UsuarioAdministradorForm";
			this->Text = L"Usuario Administrador";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pasajerosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PasajeroForm^ ventana_pasajero = gcnew PasajeroForm();
		ventana_pasajero->MdiParent = this;
		ventana_pasajero->Show();
	}
};
}
