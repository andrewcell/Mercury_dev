#pragma once

namespace Mercury {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Mainwindow에 대한 요약입니다.
	/// </summary>
	public ref class Mainwindow : public System::Windows::Forms::Form
	{
	public:
		Mainwindow(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Mainwindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(12, 108);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(783, 352);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(660, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"&Move";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Mainwindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(660, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"&Default";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(807, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 12);
			this->label1->TabIndex = 4;
			this->label1->Text = L"GAMENAME_GOES_TO_HERE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(194, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"GAMEVERSION";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(709, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"&New Game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Mainwindow::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(502, 21);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 12);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Expecting Game Path : ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(597, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"&Browse";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Mainwindow::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 12);
			this->label4->TabIndex = 10;
			this->label4->Text = L"GAMEPATH_GOES_TO_HERE";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 12);
			this->label5->TabIndex = 11;
			this->label5->Text = L"STATUS_GOES_TO_HERE";
			// 
			// Mainwindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 478);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Mainwindow";
			this->Text = L"Mainwindow";
			this->Load += gcnew System::EventHandler(this, &Mainwindow::Mainwindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Mainwindow_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "";
		label2->Text = "";
		label4->Text = "";
		label5->Text = "";
	}
	private: System::Void optionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		folderBrowserDialog1->ShowNewFolderButton = true;
		folderBrowserDialog1->Description = "Browse dialog looking for new space.";
		folderBrowserDialog1->ShowDialog();
		textBox1->Text = folderBrowserDialog1->SelectedPath;
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Mercury::NewGame^ ng = gcnew Mercury::NewGame;
		ng->Show();
	}
	private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
