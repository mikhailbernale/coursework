#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include "SearchBi.h"
std::vector <int> num;
namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ввести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(489, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сортировка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(38, 82);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(38, 145);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(389, 96);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введенные числа";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(456, 145);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(389, 96);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(610, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Отсортированные";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(613, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Поиск ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(589, 291);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(602, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Значение элемента";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(316, 79);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Удалить последний";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 419);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Курсовая ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		num.push_back((int)numericUpDown1->Value);
		//static int i = 0;
		richTextBox1->Text = "";
		for (int i=0; i<num.size();i++)
			richTextBox1->Text = richTextBox1->Text + num[i] + " ";
		

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		sort(num.begin(), num.end());
		richTextBox2->Text = "";
		for (int i = 0; i < num.size(); i++) {
			richTextBox2->Text = richTextBox2->Text + num[i] + " ";


		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox2->Text == "") MessageBox::Show("Массив не отсортирован! Нажмите сортирвать");
	else {
		int key = (int)numericUpDown2->Value;
		int index = searchbi(num, key);
		if (index == -1) MessageBox::Show("Значение не найдено");
		else MessageBox::Show("Индекс значения " + key + " равен " + index);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (num.size() >= 1) {
		num.pop_back();
		richTextBox1->Text = "";
		for (int i = 0; i < num.size(); i++) {
			richTextBox1->Text = richTextBox1->Text + num[i] + " ";
		}
	}
	else MessageBox::Show("Элементы отсутствуют");
}
};
}
