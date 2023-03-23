#pragma once

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
	/// Resumen de PasajeroForm
	/// </summary>
	public ref class PasajeroForm : public System::Windows::Forms::Form
	{
	public:
		PasajeroForm(void)
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
		~PasajeroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dnni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ genero;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dnni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->genero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PasajeroForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ACTUALIZAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PasajeroForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(426, 170);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ELIMINAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PasajeroForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dnni, this->name,
					this->genero
			});
			this->dataGridView1->Location = System::Drawing::Point(68, 221);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 150);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PasajeroForm::dataGridView1_CellClick);
			// 
			// dnni
			// 
			this->dnni->HeaderText = L"DNI";
			this->dnni->Name = L"dnni";
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			this->name->Width = 200;
			// 
			// genero
			// 
			this->genero->HeaderText = L"Genero";
			this->genero->Name = L"genero";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre completo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Fecha de nacimiento";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 8;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(246, 81);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Genero";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Hombre";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(118, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(51, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mujer";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &PasajeroForm::radioButton2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(246, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 52);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccione";
			// 
			// PasajeroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 383);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"PasajeroForm";
			this->Text = L"Ventana Pasajeros";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Definir un objeto de tipo pasajero
		Pasajero^ p = gcnew Pasajero();
		p->Dni = textBox1->Text;
		p->Nombre = textBox2->Text;
		p->Fecha_nacimiento = dateTimePicker1->Value;
		//Lectura de los radio bottom
		if (radioButton1->Checked == true) {
			//Hombre 
			p->Genero = "Masculino";
		}
		else if (radioButton2->Checked) {
			//Mujer
			p->Genero = "Femenino";
		}
		else
		{
			//Error no se ha seleccionado el genero
			p->Genero = "Defina";
		}
		
		BoletoManager::AgregarPasajero(p);
		llenarTablaPasajeros();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pasajero^ p = gcnew Pasajero();
		p->Dni = textBox1->Text;
		p->Nombre = textBox2->Text;
		p->Fecha_nacimiento = dateTimePicker1->Value;
		//Lectura de los radio bottom
		if (radioButton1->Checked == true) {
			//Hombre 
			p->Genero = "Masculino";
		}
		else if (radioButton2->Checked) {
			//Mujer
			p->Genero = "Femenino";
		}
		else
		{
			//Error no se ha seleccionado el genero
			p->Genero = "Defina";
		}
		BoletoManager::ActualizarPasajero(p);
		llenarTablaPasajeros();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dni;
		dni = textBox1->Text;
		BoletoManager::EliminarPasajero(dni);
		llenarTablaPasajeros();
	}
	public:
		void llenarTablaPasajeros() {
			List<Pasajero^>^ ListaPasajeros = BoletoManager::MostrarTodosPasajeros();
			dataGridView1->Rows->Clear();
			for (int i = 0; i < ListaPasajeros->Count; i++) {
				dataGridView1->Rows->Add(
					gcnew array<String^>{
					ListaPasajeros[i]->Dni, 
					ListaPasajeros[i]->Nombre, 
					ListaPasajeros[i]->Genero
					}
				);
			}
		}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dataGridView1->CurrentCell != nullptr && 
			dataGridView1->CurrentCell->Value != nullptr &&
			dataGridView1->CurrentCell->Value->ToString() != "") {
			int numeroDeFila = dataGridView1->SelectedCells[0]->RowIndex;
			//Obtener toda la fila
			DataGridViewRow^ filaSeleccionada = dataGridView1->Rows[numeroDeFila];
			String^ dni = filaSeleccionada->Cells[0]->Value->ToString();
			Pasajero^ p = BoletoManager::BuscarPasajeroPorDni(dni);
			//LLenar los campos
			textBox1->Text = p->Dni;
			textBox2->Text = p->Nombre;
			dateTimePicker1->Value = p->Fecha_nacimiento;
			if (p->Genero == "Masculino") radioButton1->Checked = true;
			else if (p->Genero == "Femenino") radioButton2->Checked = true;
		}
	}
};
}
