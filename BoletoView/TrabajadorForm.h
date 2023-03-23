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
	/// Resumen de TrabajadorForm
	/// </summary>
	public ref class TrabajadorForm : public System::Windows::Forms::Form
	{
	public:
		TrabajadorForm(void)
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
		~TrabajadorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;



	private: System::Windows::Forms::TabPage^ tabPage3;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView3;



	private: System::Windows::Forms::TextBox^ textBox18;

	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumeroLicencia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumeroLicencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(465, 500);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(457, 474);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Conductor";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(79, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Numero de Licencia";
			this->label8->Click += gcnew System::EventHandler(this, &TrabajadorForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(76, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Numero de Telefono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(78, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Años de experiencia";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(142, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Salario";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(129, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Direccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(137, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(154, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"DNI";
			this->label1->Click += gcnew System::EventHandler(this, &TrabajadorForm::label1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(349, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(199, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TrabajadorForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(457, 474);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Vendedor";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dateTimePicker1);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->textBox22);
			this->tabPage3->Controls->Add(this->textBox23);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(457, 474);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Administrador";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 67);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(199, 93);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(166, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(199, 119);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(166, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(199, 144);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(166, 20);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(199, 170);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(166, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(199, 196);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(166, 20);
			this->textBox8->TabIndex = 18;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->DNI, this->Nombre,
					this->NumeroLicencia
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 281);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 187);
			this->dataGridView1->TabIndex = 19;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 277);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(445, 187);
			this->dataGridView2->TabIndex = 39;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(199, 166);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(166, 20);
			this->textBox10->TabIndex = 37;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(199, 140);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(166, 20);
			this->textBox11->TabIndex = 36;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(199, 115);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(166, 20);
			this->textBox12->TabIndex = 35;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(199, 89);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(166, 20);
			this->textBox13->TabIndex = 34;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(199, 63);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(166, 20);
			this->textBox14->TabIndex = 33;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(199, 37);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(166, 20);
			this->textBox15->TabIndex = 32;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(199, 11);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(166, 20);
			this->textBox16->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(84, 169);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Centro de Estudios";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(148, 143);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Email";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(142, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Salario";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(120, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Contraseña";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(129, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Direccion";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(137, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Nombre";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(154, 14);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 13);
			this->label16->TabIndex = 23;
			this->label16->Text = L"DNI";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(349, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(199, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Actualizar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(39, 220);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Aceptar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 277);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(445, 187);
			this->dataGridView3->TabIndex = 39;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(199, 166);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(200, 20);
			this->textBox18->TabIndex = 37;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(199, 115);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(200, 20);
			this->textBox20->TabIndex = 35;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(199, 89);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(200, 20);
			this->textBox21->TabIndex = 34;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(199, 63);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(200, 20);
			this->textBox22->TabIndex = 33;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(199, 37);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(200, 20);
			this->textBox23->TabIndex = 32;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(199, 11);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(200, 20);
			this->textBox24->TabIndex = 31;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(76, 169);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(104, 13);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Numero de Telefono";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(78, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(108, 13);
			this->label19->TabIndex = 28;
			this->label19->Text = L"Fecha de Nacimiento";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(142, 118);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"Salario";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(120, 92);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(61, 13);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Contraseña";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(129, 66);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 13);
			this->label22->TabIndex = 25;
			this->label22->Text = L"Direccion";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(137, 40);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 13);
			this->label23->TabIndex = 24;
			this->label23->Text = L"Nombre";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(154, 14);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(26, 13);
			this->label24->TabIndex = 23;
			this->label24->Text = L"DNI";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(349, 220);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Eliminar";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(199, 220);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Actualizar";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(39, 220);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Aceptar";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(199, 141);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 200;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Fecha de Nacimiento";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Centro de Estudios";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 200;
			// 
			// NumeroLicencia
			// 
			this->NumeroLicencia->HeaderText = L"N. de Licencia";
			this->NumeroLicencia->Name = L"NumeroLicencia";
			// 
			// TrabajadorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 524);
			this->Controls->Add(this->tabControl1);
			this->Name = L"TrabajadorForm";
			this->Text = L"Ventana Trabajador";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
