#pragma once
#include "ClientForm.h"
#include "TalentForm.h"
#include "AdminForm.h"
namespace finalurepair {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Clientbutton;
	private: System::Windows::Forms::Button^ Tallentbutton;
	private: System::Windows::Forms::Button^ Adminbutton;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Clientbutton = (gcnew System::Windows::Forms::Button());
			this->Tallentbutton = (gcnew System::Windows::Forms::Button());
			this->Adminbutton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(172, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(494, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"URepair Program";
			// 
			// Clientbutton
			// 
			this->Clientbutton->Location = System::Drawing::Point(184, 329);
			this->Clientbutton->Name = L"Clientbutton";
			this->Clientbutton->Size = System::Drawing::Size(101, 44);
			this->Clientbutton->TabIndex = 1;
			this->Clientbutton->Text = L"Client";
			this->Clientbutton->UseVisualStyleBackColor = true;
			this->Clientbutton->Click += gcnew System::EventHandler(this, &MyForm::Clientbutton_Click);
			// 
			// Tallentbutton
			// 
			this->Tallentbutton->Location = System::Drawing::Point(356, 329);
			this->Tallentbutton->Name = L"Tallentbutton";
			this->Tallentbutton->Size = System::Drawing::Size(101, 44);
			this->Tallentbutton->TabIndex = 2;
			this->Tallentbutton->Text = L"Talent";
			this->Tallentbutton->UseVisualStyleBackColor = true;
			this->Tallentbutton->Click += gcnew System::EventHandler(this, &MyForm::Tallentbutton_Click);
			// 
			// Adminbutton
			// 
			this->Adminbutton->Location = System::Drawing::Point(532, 329);
			this->Adminbutton->Name = L"Adminbutton";
			this->Adminbutton->Size = System::Drawing::Size(101, 44);
			this->Adminbutton->TabIndex = 3;
			this->Adminbutton->Text = L"Admin";
			this->Adminbutton->UseVisualStyleBackColor = true;
			this->Adminbutton->Click += gcnew System::EventHandler(this, &MyForm::Adminbutton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(527, 120);
			this->label2->TabIndex = 4;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(802, 481);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Adminbutton);
			this->Controls->Add(this->Tallentbutton);
			this->Controls->Add(this->Clientbutton);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"URepair Program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Clientbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientForm^ obj1 = gcnew ClientForm(this);
		obj1->ShowDialog();
		
	}
	private: System::Void Tallentbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TalentForm^ obj2 = gcnew TalentForm(this);
		obj2->ShowDialog();

	}
	private: System::Void Adminbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdminForm^ obj3 = gcnew AdminForm(this);
		obj3->ShowDialog();
	}
};
}
