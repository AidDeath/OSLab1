#pragma once
#include <iostream>
#include <sstream>
#include <windows.h>
//#include "c:\Users\aidde\source\repos\Project1\Dll_2\dll2_header.h"

//#include <Cstring>

namespace Project1 {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:

		typedef void(*pgetBin)(int x, char*);

		pgetBin getBin;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Go!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please enter a number and Press \"Go!\"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(236, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(236, 35);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(236, 58);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(236, 81);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(355, 149);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calc to 2 3 8 16";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		

		unsigned int x = int::Parse(textBox1->Text);
		//Прочитали число, передаем его в функцию библиотеки.

		//Запись значения из адреса buf в строку System:: и передача в текст 
		char buf[30] = "";

		getBin(x, buf);

		System::String^ result = gcnew System::String(buf);
		label1->Text = result;
		
	//	std::stoi(buf, nullptr, 10);

		//Close();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		// ПОДКЛЮЧЕНИЕ БИБЛИОТЕКИ
		HINSTANCE hLib = LoadLibrary(TEXT("../DEBUG/Dll_2.dll"));
		if (hLib == NULL)
		{
			MessageBox::Show(this, "норм", "error", MessageBoxButtons::OK);
		}
		else
		{
			
			getBin = (pgetBin)GetProcAddress(hLib, "getBin");
			//DigitsCount = (pDigitsCount)GetProcAddress(hLib, "DigitsCount");


			if (!getBin)
			{// handle the error
				FreeLibrary(hLib);
				//	MessageBoxW(NULL, TEXT("Библиотека освобождена, нет такой функции"), NULL, MB_OK);
				MessageBox::Show(this, "Не загружен адрес ф-ции", "error", MessageBoxButtons::OK);
				//MessageBoxEx(NULL, TEXT("3"), TEXT("3"), MB_OK, 0);
			}
		}
		// КОНЕЦ ПОДКЛЮЧЕНИЯ БИБЛИОТЕКИ

	}

};
}
