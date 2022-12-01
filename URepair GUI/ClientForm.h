#pragma once
namespace finalurepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		ClientForm(void)
		{
			InitializeComponent();
		}
		ClientForm(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
		StreamReader^ database_file = gcnew StreamReader("talents.txt");
	private: System::Windows::Forms::Label^ labelselect;
	public:

	public:
		array<String^>^ line = database_file->ReadToEnd()->Split('\n');
	protected:

		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backbutton1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ filtercmb;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ applyfilterbutton;
	private: System::Windows::Forms::Button^ bookbutton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->backbutton1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->applyfilterbutton = (gcnew System::Windows::Forms::Button());
			this->filtercmb = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bookbutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelselect = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// backbutton1
			// 
			this->backbutton1->Location = System::Drawing::Point(307, 0);
			this->backbutton1->Margin = System::Windows::Forms::Padding(2);
			this->backbutton1->Name = L"backbutton1";
			this->backbutton1->Size = System::Drawing::Size(56, 19);
			this->backbutton1->TabIndex = 0;
			this->backbutton1->Text = L"Back";
			this->backbutton1->UseVisualStyleBackColor = true;
			this->backbutton1->Click += gcnew System::EventHandler(this, &ClientForm::backbutton1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->applyfilterbutton);
			this->panel1->Controls->Add(this->filtercmb);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(1);
			this->panel1->Size = System::Drawing::Size(150, 387);
			this->panel1->TabIndex = 1;
			// 
			// applyfilterbutton
			// 
			this->applyfilterbutton->Location = System::Drawing::Point(38, 94);
			this->applyfilterbutton->Margin = System::Windows::Forms::Padding(2);
			this->applyfilterbutton->Name = L"applyfilterbutton";
			this->applyfilterbutton->Size = System::Drawing::Size(90, 19);
			this->applyfilterbutton->TabIndex = 2;
			this->applyfilterbutton->Text = L"Apply Filter";
			this->applyfilterbutton->UseVisualStyleBackColor = true;
			this->applyfilterbutton->Click += gcnew System::EventHandler(this, &ClientForm::applyfilterbutton_Click);
			// 
			// filtercmb
			// 
			this->filtercmb->FormattingEnabled = true;
			this->filtercmb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"No Sort", L"Rating", L"Price" });
			this->filtercmb->Location = System::Drawing::Point(22, 70);
			this->filtercmb->Margin = System::Windows::Forms::Padding(2);
			this->filtercmb->Name = L"filtercmb";
			this->filtercmb->Size = System::Drawing::Size(120, 21);
			this->filtercmb->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(8, 44);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Filter ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(1, 1);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Talent Filters";
			// 
			// bookbutton
			// 
			this->bookbutton->Location = System::Drawing::Point(368, 0);
			this->bookbutton->Margin = System::Windows::Forms::Padding(2);
			this->bookbutton->Name = L"bookbutton";
			this->bookbutton->Size = System::Drawing::Size(93, 19);
			this->bookbutton->TabIndex = 2;
			this->bookbutton->Text = L"Book Person";
			this->bookbutton->UseVisualStyleBackColor = true;
			this->bookbutton->Click += gcnew System::EventHandler(this, &ClientForm::bookbutton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->backbutton1);
			this->panel2->Controls->Add(this->bookbutton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(150, 357);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(480, 30);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->labelselect);
			this->panel3->Controls->Add(this->listBox1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(150, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(480, 357);
			this->panel3->TabIndex = 4;
			// 
			// labelselect
			// 
			this->labelselect->AutoSize = true;
			this->labelselect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelselect->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelselect->Location = System::Drawing::Point(10, 278);
			this->labelselect->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelselect->Name = L"labelselect";
			this->labelselect->Size = System::Drawing::Size(46, 17);
			this->labelselect->TabIndex = 11;
			this->labelselect->Text = L"label3";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(14, 36);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 199);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientForm::listBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(10, 253);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Talent Selected:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(10, 8);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Results:";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(630, 387);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ClientForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Client - URepair Program";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		filtercmb->Text = "No Sort";
		labelselect->Text = "" ;
		for (int i = 0; i < line->Length; i++) {
			listBox1->Sorted = false;
			listBox1->Items->Add(line[i]);
		}
	}
	private: System::Void applyfilterbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (filtercmb->Text == "No Sort") {	
			listBox1->Sorted = false;
			listBox1->Items->Clear();
			for (int i = 0; i < line->Length; i++) {
				listBox1->Items->Add(line[i]);
			}

		}
		else if (filtercmb->Text == "Rating") {
			listBox1->Sorted = true;
			listBox1->Items->Clear();
			for (int i = 0; i < line->Length; i++) {
				array<String^>^ words = line[i]->Split(' ');
				String^ temp = words[0];
				words[0] = words[4];
				words[4] = temp;

				String^ add = "";

				for (int i = 0; i < words->Length; i++) {
					add += words[i];
					add += " ";
				}
				listBox1->Items->Add(add);
			}
		}
		else if (filtercmb->Text == "Price") {
			listBox1->Sorted = true;
			listBox1->Items->Clear();
			for (int i = 0; i < line->Length; i++) {
				array<String^>^ words = line[i]->Split(' ');
				String^ temp = words[0];
				words[0] = words[3];
				words[3] = temp;

				String^ add = "";

				for (int i = 0; i < words->Length; i++) {
					add += words[i];
					add += " ";
				}
				listBox1->Items->Add(add);
			}
		}
	};
	private: System::Void bookbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ words = listBox1->SelectedItem->ToString()->Split(' ');
		if (words[6] == "Booked") {
			MessageBox::Show("Oh no, looks like " + words[1] + " " + words[2] + " is booked!", "Whoops!");
		}

		else if (words[6] == "Available") {
			if (filtercmb->Text == "No Sort") {
				MessageBox::Show(
					"Name: " + words[1] + " " + words[2]
					+ "\nEmail: " + words[7]
					+ "\nPrice: " + words[3], "Booking Confirmed!");
			}
			else if (filtercmb->Text == "Rating") {
				MessageBox::Show(
					"Name: " + words[1] + " " + words[2]
					+ "\nEmail: " + words[7]
					+ "\nPrice: " + words[3], "Booking Confirmed!");
			}
			else if (filtercmb->Text == "Price") {
				MessageBox::Show(
					"Name: " + words[1] + " " + words[2]
					+ "\nEmail: " + words[7]
					+ "\nPrice: " + words[0], "Booking Confirmed!");
			}
		}
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ words = listBox1->SelectedItem->ToString()->Split(' ');

		if (filtercmb->Text == "No Sort") {
			labelselect->Text = "Id: " + words[0] + "\nName: " + words[1] + " " + words[2];
		}
		else if (filtercmb->Text == "Rating") {
			labelselect->Text = "Id: " + words[4] + "\nName: " + words[1] + " " + words[2];
		}
		else if (filtercmb->Text == "Price") {
			labelselect->Text = "Id: " + words[3] + "\nName: " + words[1] + " " + words[2];
		}
}
};
};