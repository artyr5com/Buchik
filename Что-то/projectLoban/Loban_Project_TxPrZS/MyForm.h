#pragma once
#include <cstdlib>
#include <cfloat>
#include <cmath>
#include "gen.h"
#include <string>	
namespace LobanProjectTxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Windows::Forms::DataVisualization::Charting;


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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ eXITToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ eXITToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tABLEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cOLOROFTHETEXTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cOLROFTHEBACKGROUNDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hEIGHTOFTHELINEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wEITHOFTHELINEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hEADERFONTOPTIONSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cOLOROFTHETITLEToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::FontDialog^ fontDialog1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXITToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tABLEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cOLOROFTHETEXTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cOLROFTHEBACKGROUNDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hEIGHTOFTHELINEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->wEITHOFTHELINEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->hEADERFONTOPTIONSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cOLOROFTHETITLEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-4, 42);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1086, 704);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1070, 657);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"GENERATOR";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(589, 346);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(252, 35);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Special elements";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(357, 554);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(368, 38);
			this->textBox3->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(166, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(705, 81);
			this->button1->TabIndex = 7;
			this->button1->Text = L"DONE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(335, 346);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(226, 35);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Header Letters";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(166, 346);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(142, 35);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Number";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(473, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(368, 38);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(473, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(368, 38);
			this->textBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(193, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(261, 42);
			this->label4->TabIndex = 2;
			this->label4->Text = L"MAX LENGTH";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(193, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"MIN LENGTH";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(374, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(328, 55);
			this->label2->TabIndex = 0;
			this->label2->Text = L"GENERATOR";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1070, 657);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"TABLE";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(130, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(830, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"INFORMATION ABOUT PASSWORD";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSkyBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(150, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(786, 509);
			this->dataGridView1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->eXITToolStripMenuItem,
					this->tABLEToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1088, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eXITToolStripMenuItem.BackgroundImage")));
			this->eXITToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->eXITToolStripMenuItem1 });
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(76, 36);
			this->eXITToolStripMenuItem->Text = L"FILE";
			// 
			// eXITToolStripMenuItem1
			// 
			this->eXITToolStripMenuItem1->BackColor = System::Drawing::Color::SkyBlue;
			this->eXITToolStripMenuItem1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eXITToolStripMenuItem1.BackgroundImage")));
			this->eXITToolStripMenuItem1->Name = L"eXITToolStripMenuItem1";
			this->eXITToolStripMenuItem1->Size = System::Drawing::Size(359, 44);
			this->eXITToolStripMenuItem1->Text = L"EXIT";
			this->eXITToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::eXITToolStripMenuItem1_Click);
			// 
			// tABLEToolStripMenuItem
			// 
			this->tABLEToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tABLEToolStripMenuItem.BackgroundImage")));
			this->tABLEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->cOLOROFTHETEXTToolStripMenuItem,
					this->cOLROFTHEBACKGROUNDToolStripMenuItem, this->hEIGHTOFTHELINEToolStripMenuItem, this->wEITHOFTHELINEToolStripMenuItem, this->hEADERFONTOPTIONSToolStripMenuItem,
					this->cOLOROFTHETITLEToolStripMenuItem
			});
			this->tABLEToolStripMenuItem->Name = L"tABLEToolStripMenuItem";
			this->tABLEToolStripMenuItem->Size = System::Drawing::Size(98, 36);
			this->tABLEToolStripMenuItem->Text = L"TABLE";
			// 
			// cOLOROFTHETEXTToolStripMenuItem
			// 
			this->cOLOROFTHETEXTToolStripMenuItem->Name = L"cOLOROFTHETEXTToolStripMenuItem";
			this->cOLOROFTHETEXTToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->cOLOROFTHETEXTToolStripMenuItem->Text = L"COLOR OF THE TEXT";
			this->cOLOROFTHETEXTToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cOLOROFTHETEXTToolStripMenuItem_Click);
			// 
			// cOLROFTHEBACKGROUNDToolStripMenuItem
			// 
			this->cOLROFTHEBACKGROUNDToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cOLROFTHEBACKGROUNDToolStripMenuItem.BackgroundImage")));
			this->cOLROFTHEBACKGROUNDToolStripMenuItem->Name = L"cOLROFTHEBACKGROUNDToolStripMenuItem";
			this->cOLROFTHEBACKGROUNDToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->cOLROFTHEBACKGROUNDToolStripMenuItem->Text = L"COLOR OF THE BACKGROUND";
			this->cOLROFTHEBACKGROUNDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cOLROFTHEBACKGROUNDToolStripMenuItem_Click);
			// 
			// hEIGHTOFTHELINEToolStripMenuItem
			// 
			this->hEIGHTOFTHELINEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox1 });
			this->hEIGHTOFTHELINEToolStripMenuItem->Name = L"hEIGHTOFTHELINEToolStripMenuItem";
			this->hEIGHTOFTHELINEToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->hEIGHTOFTHELINEToolStripMenuItem->Text = L"HEIGHT OF THE LINE";
			this->hEIGHTOFTHELINEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hEIGHTOFTHELINEToolStripMenuItem_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 39);
			// 
			// wEITHOFTHELINEToolStripMenuItem
			// 
			this->wEITHOFTHELINEToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wEITHOFTHELINEToolStripMenuItem.BackgroundImage")));
			this->wEITHOFTHELINEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox2 });
			this->wEITHOFTHELINEToolStripMenuItem->Name = L"wEITHOFTHELINEToolStripMenuItem";
			this->wEITHOFTHELINEToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->wEITHOFTHELINEToolStripMenuItem->Text = L"WIDTH OF THE LINE";
			this->wEITHOFTHELINEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wEITHOFTHELINEToolStripMenuItem_Click);
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 39);
			// 
			// hEADERFONTOPTIONSToolStripMenuItem
			// 
			this->hEADERFONTOPTIONSToolStripMenuItem->Name = L"hEADERFONTOPTIONSToolStripMenuItem";
			this->hEADERFONTOPTIONSToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->hEADERFONTOPTIONSToolStripMenuItem->Text = L"HEADER FONT OPTIONS";
			this->hEADERFONTOPTIONSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hEADERFONTOPTIONSToolStripMenuItem_Click);
			// 
			// cOLOROFTHETITLEToolStripMenuItem
			// 
			this->cOLOROFTHETITLEToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cOLOROFTHETITLEToolStripMenuItem.BackgroundImage")));
			this->cOLOROFTHETITLEToolStripMenuItem->Name = L"cOLOROFTHETITLEToolStripMenuItem";
			this->cOLOROFTHETITLEToolStripMenuItem->Size = System::Drawing::Size(472, 44);
			this->cOLOROFTHETITLEToolStripMenuItem->Text = L"COLOR OF THE TITLE";
			this->cOLOROFTHETITLEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cOLOROFTHETITLEToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1088, 841);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"GENERATOR";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void eXITToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Thank You for choosing to give time to my program - it means a lot to me!", "THANKS FOR ATTENTION", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Close();
	}

	private: System::Void cOLOROFTHETEXTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		dataGridView1->RowsDefaultCellStyle->ForeColor = colorDialog1->Color; dataGridView1->RowsDefaultCellStyle->SelectionForeColor = colorDialog1->Color;
	}
	private: System::Void cOLROFTHEBACKGROUNDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		colorDialog1->ShowDialog();
		dataGridView1->RowsDefaultCellStyle->BackColor = colorDialog1->Color; dataGridView1->RowsDefaultCellStyle->SelectionBackColor = colorDialog1->Color;
	}

	private: System::Void hEIGHTOFTHELINEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView1->Rows[i]->Height = Convert::ToInt16(toolStripTextBox1->Text);
			}
		}
		catch (Exception^ e) {
		}
	}
	private: System::Void wEITHOFTHELINEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns[0]->Width = Convert::ToInt16(toolStripTextBox2->Text);
		dataGridView1->Columns[1]->Width = Convert::ToInt16(toolStripTextBox2->Text);
	}
	private: System::Void hEADERFONTOPTIONSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();
		label1->Font = fontDialog1->Font;
	}
	private: System::Void cOLOROFTHETITLEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		label1->ForeColor = colorDialog1->Color;
		label1->Font = fontDialog1->Font;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			PasswordGenerator* generator = new PasswordGenerator();
			int Min = System::Convert::ToInt32(textBox1->Text);
			int Max = System::Convert::ToInt32(textBox2->Text);
			if (Min > Max) {
			 MessageBox::Show("Maximum must be bigger than minimum", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Focus();
			}

			string password = generator->generate(checkBox1->Checked, checkBox2->Checked, checkBox3->Checked, Min, Max);
			String^ str = this->textBox3->Text;
			str = gcnew System::String(password.c_str());
			textBox3->Text = str;
			int rowcount;
			int count = 1;
			dataGridView1->ColumnCount = 1;
			dataGridView1->Columns[0]->Name = "PASSWORD";
			for (int i = 0; i < count; ++i) {
				dataGridView1->RowCount = 1;
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(str);
				count++;
			}

		}
		catch (System::FormatException^ e) {
			MessageBox::Show("Enter correct format data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Focus();
		}
		catch (System::IndexOutOfRangeException^ e) {
			MessageBox::Show("IndexOutOfRangeException", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Focus();
		}
		catch (System::ArgumentOutOfRangeException^ e) {
			MessageBox::Show("PASSWORD WAS GENERATED", "INFORMATION", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			textBox1->Focus();
		}
		catch (System::OverflowException^ e) {
				MessageBox::Show("You need to put correct data in the boxes", "OverflowException", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Focus();
		}
		catch (System::ArgumentNullException^ e) {
			//Виняток, який створюється, коли нульове посилання передається методу, який не приймає його як дійсний аргумент.
			MessageBox::Show("You need to put correct data in the boxes", "ArgumentNullException", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Focus();
		}
	};
	};
}

