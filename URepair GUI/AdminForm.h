#pragma once

namespace finalurepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		Form^ adminsend;
		String^ username = "admin";
		String^ password = "admin";
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminForm(Form^obj6)
		{
			adminsend = obj6;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AdminLogin;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BackbuttonA;

	private: System::Windows::Forms::Button^ LogInbutton1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AdminLogin = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BackbuttonA = (gcnew System::Windows::Forms::Button());
			this->LogInbutton1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AdminLogin
			// 
			this->AdminLogin->AutoSize = true;
			this->AdminLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminLogin->Location = System::Drawing::Point(294, 176);
			this->AdminLogin->Name = L"AdminLogin";
			this->AdminLogin->Size = System::Drawing::Size(173, 32);
			this->AdminLogin->TabIndex = 15;
			this->AdminLogin->Text = L"Admin Login";
			this->AdminLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(138, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(494, 69);
			this->label3->TabIndex = 14;
			this->label3->Text = L"URepair Program";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(340, 297);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 27);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(340, 251);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 27);
			this->textBox1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(225, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 258);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Username:";
			// 
			// BackbuttonA
			// 
			this->BackbuttonA->Location = System::Drawing::Point(432, 363);
			this->BackbuttonA->Name = L"BackbuttonA";
			this->BackbuttonA->Size = System::Drawing::Size(81, 35);
			this->BackbuttonA->TabIndex = 9;
			this->BackbuttonA->Text = L"Back";
			this->BackbuttonA->UseVisualStyleBackColor = true;
			this->BackbuttonA->Click += gcnew System::EventHandler(this, &AdminForm::BackbuttonA_Click);
			// 
			// LogInbutton1
			// 
			this->LogInbutton1->Location = System::Drawing::Point(300, 363);
			this->LogInbutton1->Name = L"LogInbutton1";
			this->LogInbutton1->Size = System::Drawing::Size(81, 35);
			this->LogInbutton1->TabIndex = 8;
			this->LogInbutton1->Text = L"Log In";
			this->LogInbutton1->UseVisualStyleBackColor = true;
			this->LogInbutton1->Click += gcnew System::EventHandler(this, &AdminForm::LogInbutton1_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(782, 559);
			this->Controls->Add(this->AdminLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BackbuttonA);
			this->Controls->Add(this->LogInbutton1);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackbuttonA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		adminsend->Show();
	}
	private: System::Void LogInbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ USERinput = textBox1->Text;
		String^ PASSinput = textBox2->Text;

		if ((username->Equals(USERinput)) && (password->Equals(PASSinput))) {
			StreamReader^ database_file = gcnew StreamReader("test.txt");
			String^ file1 = database_file->ReadToEnd();
			MessageBox::Show(file1, "database_file");
			textBox1->Text = "";
			textBox2->Text = "";
		}
	};
	};
}
