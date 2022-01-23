#pragma once
#include <string>
#include "Header.h"
namespace Project2 {
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

		MyForm(void)
		{
			InitializeComponent();
			this->listBox1->Items->Add("Nr.0  Cena:2.5 chipsy_paprykowe");
			this->listBox1->Items->Add("Nr.1  Cena:2.5 chipsy_cebulowe");
			this->listBox1->Items->Add("Nr.2  Cena:2.5 chipsy_solone");
			this->listBox1->Items->Add("Nr.3  Cena:2.5 chipsy_BBQ");
			this->listBox1->Items->Add("Nr.4  Cena:2.0 Woda_niegazowana");
			this->listBox1->Items->Add("Nr.5  Cena:2.0 woda_gazowana");
			this->listBox1->Items->Add("Nr.6  Cena:2.5 orzeszki_solone");
			this->listBox1->Items->Add("Nr.7  Cena:2.5 orzeszki_karmelowe");
			this->listBox1->Items->Add("Nr.8  Cena:2.5 batonik_czekoladowy");
			this->listBox1->Items->Add("Nr.9  Cena:2.5 batonik_toffie");
			this->listBox1->Items->Add("Nr.10 Cena:2.5 batonik_energetyczny");
			this->listBox1->Items->Add("Nr.11 Cena:2.5 napoj_energetyczny");
			this->listBox1->Items->Add("Nr.12 Cena:2.5 herbata_mrozona");
			this->listBox1->Items->Add("Nr.13 Cena:2.5 Oranzada_czerwona");
			this->listBox1->Items->Add("Nr.14 Cena:2.5 oranzada_niebieska");
			this->listBox1->Items->Add("Nr.15 Cena:2.5 napoj_izotoniczny");
			this->listBox1->Items->Add("Nr.16 Cena:2.5 orzeszki_w_czekoladzie");
			this->listBox1->Items->Add("Nr.17 Cena:2.5 suszone_jablka");
			this->listBox1->Items->Add("Nr.18 Cena:2.5 beef_jerky");
			this->listBox1->Items->Add("Nr.19 Cena:2.5 zelki");
			this->listBox1->Items->Add("Nr.20 Cena:2.5 prazona_kukurydza");
			this->listBox1->Items->Add("Nr.21 Cena:2.5 slonecznik_prazony");
			this->listBox1->Items->Add("Nr.22 Cena:2.5 sok_pomaranczowy");
			this->listBox1->Items->Add("Nr.23 Cena:2.5 sok_jablkowy");
			this->listBox1->Items->Add("Nr.24 Cena:2.5 sok_winogronowy");
			this->listBox1->Items->Add("Nr.25 Cena:2.5 sok_multiwitamina");
			this->listBox1->Items->Add("Nr.26 Cena:2.5 drazetki_kokosowe");
			this->listBox1->Items->Add("Nr.27 Cena:2.5 drazetki_czekoladowe");
			this->listBox1->Items->Add("Nr.28 Cena:2.5 batonik_mleczny");
			this->listBox1->Items->Add("Nr.29 Cena:2.5 batonik_advocat");
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	public:  automat* automat1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: double c;
	public: double monety;
	public: int wybor;
	public: double buf;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	public:
	protected:
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(306, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Wrzut";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(387, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Wybor";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(315, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"MENU";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(10, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(218, 407);
			this->listBox1->TabIndex = 30;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(264, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 31;
			this->button1->Text = L"0,5zl";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(345, 353);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 32;
			this->button4->Text = L"0,2zl";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(426, 353);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 33;
			this->button5->Text = L"0,1zl";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(264, 324);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 34;
			this->button6->Text = L"5zl";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(345, 324);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 35;
			this->button7->Text = L"2zl";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(426, 324);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 36;
			this->button8->Text = L"1zl";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(239, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Podaj numer produktu";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(242, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(432, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Srodki";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(395, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(239, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Reszta";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(242, 149);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 95);
			this->listBox2->TabIndex = 43;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(395, 173);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 23);
			this->button9->TabIndex = 44;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Lime;
			this->button10->Location = System::Drawing::Point(426, 173);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(21, 23);
			this->button10->TabIndex = 45;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(453, 173);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 23);
			this->button11->TabIndex = 46;
			this->button11->Text = L"check";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(395, 202);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(106, 10);
			this->progressBar1->TabIndex = 47;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(395, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 48;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(346, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 49;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 434);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"Automat";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		c = 0.0;
		buf = 0.0;
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 5.0;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 2.0;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 1.0;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 0.5;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 0.2;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	c = 0.1;
	monety = monety + c;
	textBox3->Text = System::Convert::ToString(monety);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listBox2->Items->Clear();
	this->listBox2->Items->Add(System::Convert::ToString(monety));
	monety = 0.0;
	this->textBox1->Clear();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double cena[30] = { 2.5,2.5,2.5,2.5,2.00,2.00,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5,2.5 };
	
	wybor = System::Convert::ToInt16(textBox1->Text);
	if (monety > 0) {
		int R, P; //zmienne R i P obslugujace algorytm wyliczajacy reszte
		R = ((monety * 100) - cena[wybor] * 100); //przeliczanie wartosci ktoro nalezy zwrocic
		int N[6] = { 500, 200, 100, 50, 20, 10 };// tablica przechowujaca nominaly (operacje na groszach)
		int i = 0;
		while (R > 0) {
			if (R >= N[i]) { // sprawdznie czy R ktora ma zostac zwrocona jest wieksza lub rowna nominalowi ktory mozna wybrac
				P = R / N[i]; // p ma przypisan¹ wartoœæ R podzelon¹ przez wartosc nominalu
				R = R - (N[i] * P); // R wartosc zwracana to wartosc zwracana pomniejszona o dany nomianl wydawany dana ilosc razy
				this->listBox2->Items->Add(System::Convert::ToString(N[i] / 100.0));
			}
			i++;
		}
	}


	this->textBox3->Clear();
	this->textBox1->Clear();
	monety = 0.0;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int kon = 0;
	for (int pro = 0; pro <= 100; pro++) {
		this->progressBar1->Value = pro;
		for (int i = 0; i <= 1000; i++) {
			if (i == 1000) { kon = 1; };
		};
	}
	monety = buf;
	if (kon == 1) {
		textBox3->Text = System::Convert::ToString(monety);
	};
	this->listBox2->Items->Clear();
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	//dodwanie
	buf = buf + 0.5;
	textBox2->Text = System::Convert::ToString(buf);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//odejmowanie
	buf = buf - 0.5;
	textBox2->Text = System::Convert::ToString(buf);
}
};
}
