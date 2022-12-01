#pragma once
#include "RegisterForm.h"
#include "LogInForm.h"

namespace finalurepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TalentForm
	/// </summary>
	public ref class TalentForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		TalentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TalentForm(Form^ obj2)
		{
			obj = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TalentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Talentquestion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Button^ LogInbutton;
	private: System::Windows::Forms::Button^ BackT;
	protected:

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
			this->Talentquestion = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->LogInbutton = (gcnew System::Windows::Forms::Button());
			this->BackT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Talentquestion
			// 
			this->Talentquestion->AutoSize = true;
			this->Talentquestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Talentquestion->Location = System::Drawing::Point(256, 159);
			this->Talentquestion->Name = L"Talentquestion";
			this->Talentquestion->Size = System::Drawing::Size(238, 64);
			this->Talentquestion->TabIndex = 0;
			this->Talentquestion->Text = L"Talent,\r\nWould you like to:";
			this->Talentquestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(135, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(494, 69);
			this->label1->TabIndex = 1;
			this->label1->Text = L"URepair Program";
			// 
			// RegisterButton
			// 
			this->RegisterButton->Location = System::Drawing::Point(245, 259);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(95, 25);
			this->RegisterButton->TabIndex = 2;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &TalentForm::RegisterButton_Click);
			// 
			// LogInbutton
			// 
			this->LogInbutton->Location = System::Drawing::Point(401, 259);
			this->LogInbutton->Name = L"LogInbutton";
			this->LogInbutton->Size = System::Drawing::Size(93, 25);
			this->LogInbutton->TabIndex = 3;
			this->LogInbutton->Text = L"Log In";
			this->LogInbutton->UseVisualStyleBackColor = true;
			this->LogInbutton->Click += gcnew System::EventHandler(this, &TalentForm::LogInbutton_Click);
			// 
			// BackT
			// 
			this->BackT->Location = System::Drawing::Point(327, 367);
			this->BackT->Name = L"BackT";
			this->BackT->Size = System::Drawing::Size(93, 25);
			this->BackT->TabIndex = 4;
			this->BackT->Text = L"Back";
			this->BackT->UseVisualStyleBackColor = true;
			this->BackT->Click += gcnew System::EventHandler(this, &TalentForm::BackT_Click);
			// 
			// TalentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(758, 468);
			this->Controls->Add(this->BackT);
			this->Controls->Add(this->LogInbutton);
			this->Controls->Add(this->RegisterButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Talentquestion);
			this->Name = L"TalentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TalentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void BackT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		RegisterForm^ register1 = gcnew RegisterForm(this);
		register1->ShowDialog();
	}
	private: System::Void LogInbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		LogInForm^ login1 = gcnew LogInForm(this);
		login1->ShowDialog();
	}
};
};

