#pragma once
//necesita la pantalla 2 porque trae cosas de ahi
//objetos y demás 
#include "frmNuevoIng.h"
/////////////////////////////

namespace PucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	////////////////
	using namespace PucpController;
	//////////////////

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			///////////////////////////////////////////
			gest = gcnew GestorIng;
			///////////////////////////////////////////
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  datos;
	protected:

	protected:
	private: System::Windows::Forms::Button^  btnNuevo;
	private: System::Windows::Forms::Button^  btnVerTodos;
	private: System::Windows::Forms::Label^  txtCodB;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	////////////////////////////////////
	public: GestorIng^ gest;
	//////////////////////////////////


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
			this->datos = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->btnVerTodos = (gcnew System::Windows::Forms::Button());
			this->txtCodB = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datos))->BeginInit();
			this->SuspendLayout();
			// 
			// datos
			// 
			this->datos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column4, this->Column3
			});
			this->datos->Location = System::Drawing::Point(102, 117);
			this->datos->Name = L"datos";
			this->datos->Size = System::Drawing::Size(581, 258);
			this->datos->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellido";
			this->Column4->Name = L"Column4";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Especialidad";
			this->Column3->Name = L"Column3";
			// 
			// btnNuevo
			// 
			this->btnNuevo->Location = System::Drawing::Point(111, 413);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(257, 83);
			this->btnNuevo->TabIndex = 2;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmPrincipal::btnNuevo_Click);
			// 
			// btnVerTodos
			// 
			this->btnVerTodos->Location = System::Drawing::Point(412, 413);
			this->btnVerTodos->Name = L"btnVerTodos";
			this->btnVerTodos->Size = System::Drawing::Size(257, 83);
			this->btnVerTodos->TabIndex = 3;
			this->btnVerTodos->Text = L"Ver Todos";
			this->btnVerTodos->UseVisualStyleBackColor = true;
			// 
			// txtCodB
			// 
			this->txtCodB->AutoSize = true;
			this->txtCodB->Location = System::Drawing::Point(98, 28);
			this->txtCodB->Name = L"txtCodB";
			this->txtCodB->Size = System::Drawing::Size(84, 13);
			this->txtCodB->TabIndex = 4;
			this->txtCodB->Text = L"Código a buscar";
			this->txtCodB->Click += gcnew System::EventHandler(this, &frmPrincipal::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 20);
			this->textBox1->TabIndex = 5;
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 528);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtCodB);
			this->Controls->Add(this->btnVerTodos);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->datos);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void frmPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
		///////////////////////////////
		//Esto no deberia hacerse aca pero por tiempo aqui será, normalmente
		//seria en el .cpp del .h
		frmNuevoIng^ ven = gcnew frmNuevoIng();
		//Para abrir la siguiente ventana
		ven->ShowDialog();
		Ingeniero^ x = ven->nuevoIng;
		gest->agregarIng(x);
		mostrarDatos();
		///////////////////////////////
	}
	//////////////////////////////
			 private: void mostrarDatos()
			 {
				 //datos->Rows->Clear; //Primero que lo limpie todo
				 int cant = gest->obtenerCantIng();//para saber cuantos ingenieros tengo
				 int i;
				 Ingeniero^ x;
				 //voy a declarar un arreglo de cadenas
				 array<String^>^ fila = gcnew array<String^>(4);
				 //ESTO ME CREA UN ARREGLO DE CADENAS DE TAMAÑO 4
				 for (i = 0; i < cant; i++)
				 {
					 
					 x = gest->obtenerIng(i);
					 fila[0] = Convert::ToString(x->getCodigo());
					 fila[1] = x->getNombre();
					 fila[2] = x->getApellido();
					 fila[3] = x->getEspe();
					 //tengo un arreglo de cadenas 
					 //Y ahora lo pongo en el Grid
					 datos->Rows->Add(fila);
				 }
			 }
	//////////////////////////////
};
}
