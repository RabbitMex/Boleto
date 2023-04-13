#pragma once
#include "LlenarComboBox.h"

namespace BoletoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace BoletoModel;
	using namespace BoletoController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ViajeForm
	/// </summary>
	public ref class ViajeForm : public System::Windows::Forms::Form
	{
	public:
		ViajeForm(void)
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
		~ViajeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Origen;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destino;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ conductor;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Origen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destino = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->conductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo de Viaje";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lugar de origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Lugar de destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fecha de viaje";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Hora de Viaje";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(48, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Conductor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(48, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Cantidad de asientos";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(166, 59);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(173, 20);
			this->textBox3->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(166, 83);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(173, 20);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(166, 109);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(173, 20);
			this->dateTimePicker2->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(167, 135);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(166, 163);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 20);
			this->textBox4->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 32);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViajeForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(205, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 30);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ViajeForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->Origen, this->destino, this->conductor
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 270);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(429, 150);
			this->dataGridView1->TabIndex = 16;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Codigo de Viaje";
			this->codigo->Name = L"codigo";
			// 
			// Origen
			// 
			this->Origen->HeaderText = L"Lugar Origen";
			this->Origen->Name = L"Origen";
			// 
			// destino
			// 
			this->destino->HeaderText = L"Lugar de destino";
			this->destino->Name = L"destino";
			// 
			// conductor
			// 
			this->conductor->HeaderText = L"Nombre conductor";
			this->conductor->Name = L"conductor";
			// 
			// ViajeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 450);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ViajeForm";
			this->Text = L"Ventana Viajes";
			this->Load += gcnew System::EventHandler(this, &ViajeForm::ViajeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Boton de Agregar Viaje
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Viaje^ viaje = gcnew Viaje();
		viaje->codigo = Int32::Parse(textBox1->Text);
		viaje->Origen = textBox2->Text;
		viaje->Destino = textBox3->Text;
		viaje->Fecha_viaje = DateTime::Parse(dateTimePicker1->Value.ToShortDateString());
		viaje->Hora_viaje = DateTime::Parse(dateTimePicker2->Value.ToShortTimeString());
		viaje->Numero_asientos = Int32::Parse(textBox4->Text);
		//viaje->Conductor = BoletoManager::BuscarConductorPorDni(comboBox1->Text);
		viaje->Conductor = BoletoManager::BuscarConductorPorDni(""+((Item^)comboBox1->SelectedItem)->Valor);

		BoletoManager::AgregarViaje(viaje);
		LlenarTablaViajes();
		LimpiarDatos();
	}
	//Boton de Actualizar viaje
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Viaje^ viaje = gcnew Viaje();
		viaje->codigo = Int32::Parse(textBox1->Text);
		viaje->Origen = textBox2->Text;
		viaje->Destino = textBox3->Text;
		viaje->Fecha_viaje = DateTime::Parse(dateTimePicker1->Value.ToShortDateString());
		viaje->Hora_viaje = DateTime::Parse(dateTimePicker2->Value.ToShortTimeString());
		viaje->Numero_asientos = Int32::Parse(textBox4->Text);
		//viaje->Conductor = BoletoManager::BuscarConductorPorDni(comboBox1->Text);
		viaje->Conductor = BoletoManager::BuscarConductorPorDni("" + ((Item^)comboBox1->SelectedItem)->Valor);

		BoletoManager::ActualizarViaje(viaje);
		LlenarTablaViajes();
		LimpiarDatos();
	}
	public:
	void LlenarTablaViajes() {
		List<Viaje^>^ lista = BoletoManager::MostrarTodosViajes();
		dataGridView1->Rows->Clear();
		for (int i = 0; i<lista->Count; i++) {
			dataGridView1->Rows->Add(
				gcnew array<String^>{
				""+lista[i]->codigo,
					lista[i]->Origen,
					lista[i]->Destino,
					lista[i]->Conductor->Nombre
				}
			);
		}
	}
	void LimpiarDatos() {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		dateTimePicker1->ResetText();
		dateTimePicker2->ResetText();
		comboBox1->ResetText();
	}
	private: System::Void ViajeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LlenarTablaViajes();
		llenarListaConductor();
	}
	public:
	void llenarListaConductor() {
		List<Conductor^>^ listaConductor = BoletoManager::MostrarTodosConductores();
		comboBox1->Items->Clear();
		for (int i = 0; i < listaConductor->Count; i++) {
			//comboBox1->Items->Add(listaConductor[i]->Dni);
			comboBox1->Items->Add(gcnew Item(listaConductor[i]->Nombre, Int32::Parse(listaConductor[i]->Dni)));
		}
	}
};
}
