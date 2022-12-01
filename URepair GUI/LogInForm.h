#pragma once
#include "ConfirmationForm.h"

namespace finalurepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
	public:
		Form^ loginReturn;
		String^ username;
		String^ password;
		LogInForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		LogInForm(Form^ obj2)
		{
			loginReturn = obj2;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LogInbutton1;
	private: System::Windows::Forms::Button^ BackbuttonL;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ TalentLogin;


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
			this->LogInbutton1 = (gcnew System::Windows::Forms::Button());
			this->BackbuttonL = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TalentLogin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LogInbutton1
			// 
			this->LogInbutton1->Location = System::Drawing::Point(288, 312);
			this->LogInbutton1->Name = L"LogInbutton1";
			this->LogInbutton1->Size = System::Drawing::Size(81, 35);
			this->LogInbutton1->TabIndex = 0;
			this->LogInbutton1->Text = L"Log In";
			this->LogInbutton1->UseVisualStyleBackColor = true;
			this->LogInbutton1->Click += gcnew System::EventHandler(this, &LogInForm::LogInbutton1_Click);
			// 
			// BackbuttonL
			// 
			this->BackbuttonL->Location = System::Drawing::Point(420, 312);
			this->BackbuttonL->Name = L"BackbuttonL";
			this->BackbuttonL->Size = System::Drawing::Size(81, 35);
			this->BackbuttonL->TabIndex = 1;
			this->BackbuttonL->Text = L"Back";
			this->BackbuttonL->UseVisualStyleBackColor = true;
			this->BackbuttonL->Click += gcnew System::EventHandler(this, &LogInForm::BackbuttonL_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(213, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(328, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 27);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(328, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 27);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(126, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(494, 69);
			this->label3->TabIndex = 6;
			this->label3->Text = L"URepair Program";
			// 
			// TalentLogin
			// 
			this->TalentLogin->AutoSize = true;
			this->TalentLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TalentLogin->Location = System::Drawing::Point(282, 125);
			this->TalentLogin->Name = L"TalentLogin";
			this->TalentLogin->Size = System::Drawing::Size(172, 32);
			this->TalentLogin->TabIndex = 7;
			this->TalentLogin->Text = L"Talent Login";
			this->TalentLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(757, 481);
			this->Controls->Add(this->TalentLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BackbuttonL);
			this->Controls->Add(this->LogInbutton1);
			this->Name = L"LogInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogInForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogInbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ database_file = gcnew StreamReader("test.txt");
		array<String^>^ line = database_file->ReadToEnd()->Split('\n');

		String^ USERinput = textBox1->Text;
		String^ PASSinput = textBox2->Text;

		int i = 0;
		ConfirmationForm^ frm = gcnew ConfirmationForm(this);
		for (int j = 0; j < 99; j++) { // set 99 to a countable value (number of lines)
			array<String^>^ val = line[i]->Split(' ');
			if (line[i]->Contains(USERinput)) {
				frm->USERNAME = val[6];
				frm->PASSWORD = val[7];

				frm->FNAME = val[1];
				frm->LNAME = val[2];
				frm->EMAIL = val[5];
				frm->TOSERV = val[3];
				frm->PRICE = val[4];

				username = val[6];
				password = val[7];
			}
			else { i++; }
		}

		if ((username->Equals(USERinput)) && (password->Equals(PASSinput))) {
			this->Hide();
			frm->ShowDialog();

			textBox1->Text = "";
			textBox2->Text = "";
		}
		else { MessageBox::Show("Invalid Username or Password"); }
	}
	
	private: System::Void BackbuttonL_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		loginReturn->Show();
	}
};
}