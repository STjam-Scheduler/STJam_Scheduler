#pragma once
#include "SqlController.h"
#include "User.h"

namespace Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für WorktimeForm
	/// </summary>
	public ref class WorktimeForm : public System::Windows::Forms::Form
	{

		double wtBegin = 0, wtEnd = 0, breakt = 0;
	private: System::Windows::Forms::Button^ save;

	public:
		WorktimeForm()
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~WorktimeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:	//own method

		bool CheckInput();
		bool CheckBreak();
		void calc_break();

	//	string readText();
		void showErro(System::String^);


	private: System::Windows::Forms::Button^ accept;
	private: System::Windows::Forms::Button^ quit;
	private: System::Windows::Forms::Label^ wtbegin;
	private: System::Windows::Forms::TextBox^ wt_beginn_t;
	private: System::Windows::Forms::TextBox^ wt_end_t;


	private: System::Windows::Forms::TextBox^ breaktime;
	private: System::Windows::Forms::TextBox^ erro;
	private: System::Windows::Forms::Label^ wt_end;



	private: System::Windows::Forms::Label^ label2;
	


	protected:

	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->accept = (gcnew System::Windows::Forms::Button());
			this->quit = (gcnew System::Windows::Forms::Button());
			this->wtbegin = (gcnew System::Windows::Forms::Label());
			this->wt_beginn_t = (gcnew System::Windows::Forms::TextBox());
			this->wt_end_t = (gcnew System::Windows::Forms::TextBox());
			this->breaktime = (gcnew System::Windows::Forms::TextBox());
			this->erro = (gcnew System::Windows::Forms::TextBox());
			this->wt_end = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// accept
			// 
			this->accept->BackColor = System::Drawing::Color::LawnGreen;
			this->accept->Location = System::Drawing::Point(225, 298);
			this->accept->Name = L"accept";
			this->accept->Size = System::Drawing::Size(113, 42);
			this->accept->TabIndex = 0;
			this->accept->Tag = L"accept_button";
			this->accept->Text = L"accept";
			this->accept->UseVisualStyleBackColor = false;
			this->accept->Click += gcnew System::EventHandler(this, &WorktimeForm::accept_Click);
			// 
			// quit
			// 
			this->quit->Location = System::Drawing::Point(23, 298);
			this->quit->Name = L"quit";
			this->quit->Size = System::Drawing::Size(93, 42);
			this->quit->TabIndex = 1;
			this->quit->Tag = L"quit_button";
			this->quit->Text = L"quit";
			this->quit->UseVisualStyleBackColor = true;
			this->quit->Click += gcnew System::EventHandler(this, &WorktimeForm::quit_Click);
			// 
			// wtbegin
			// 
			this->wtbegin->AutoSize = true;
			this->wtbegin->Location = System::Drawing::Point(48, 62);
			this->wtbegin->Name = L"wtbegin";
			this->wtbegin->Size = System::Drawing::Size(102, 17);
			this->wtbegin->TabIndex = 2;
			this->wtbegin->Text = L"worktime begin";
			// 
			// wt_beginn_t
			// 
			this->wt_beginn_t->Location = System::Drawing::Point(188, 59);
			this->wt_beginn_t->Name = L"wt_beginn_t";
			this->wt_beginn_t->Size = System::Drawing::Size(100, 22);
			this->wt_beginn_t->TabIndex = 3;
			this->wt_beginn_t->Tag = L"wt_beginn_t";
			this->wt_beginn_t->TextChanged += gcnew System::EventHandler(this, &WorktimeForm::wt_beginn_t_TextChanged);
			// 
			// wt_end_t
			// 
			this->wt_end_t->Location = System::Drawing::Point(188, 166);
			this->wt_end_t->Name = L"wt_end_t";
			this->wt_end_t->Size = System::Drawing::Size(100, 22);
			this->wt_end_t->TabIndex = 4;
			this->wt_end_t->Tag = L"wt_end_t";
			this->wt_end_t->TextChanged += gcnew System::EventHandler(this, &WorktimeForm::breaktime_calc);
			// 
			// breaktime
			// 
			this->breaktime->Enabled = false;
			this->breaktime->Location = System::Drawing::Point(438, 210);
			this->breaktime->Name = L"breaktime";
			this->breaktime->Size = System::Drawing::Size(100, 22);
			this->breaktime->TabIndex = 5;
			this->breaktime->Tag = L"break_box";
			this->breaktime->TextChanged += gcnew System::EventHandler(this, &WorktimeForm::breaktime_changed);
			// 
			// erro
			// 
			this->erro->Location = System::Drawing::Point(411, 62);
			this->erro->Name = L"erro";
			this->erro->ReadOnly = true;
			this->erro->Size = System::Drawing::Size(221, 22);
			this->erro->TabIndex = 6;
			this->erro->Tag = L"erro_box";
			// 
			// wt_end
			// 
			this->wt_end->AutoSize = true;
			this->wt_end->Location = System::Drawing::Point(48, 169);
			this->wt_end->Name = L"wt_end";
			this->wt_end->Size = System::Drawing::Size(91, 17);
			this->wt_end->TabIndex = 7;
			this->wt_end->Text = L"worktime end";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(435, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"breaktime";
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save->Enabled = false;
			this->save->Location = System::Drawing::Point(225, 298);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(113, 42);
			this->save->TabIndex = 9;
			this->save->Text = L"save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Visible = false;
			this->save->Click += gcnew System::EventHandler(this, &WorktimeForm::save_Click);
			// 
			// WorktimeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 380);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->wt_end);
			this->Controls->Add(this->erro);
			this->Controls->Add(this->breaktime);
			this->Controls->Add(this->wt_end_t);
			this->Controls->Add(this->wt_beginn_t);
			this->Controls->Add(this->wtbegin);
			this->Controls->Add(this->quit);
			this->Controls->Add(this->accept);
			this->Name = L"WorktimeForm";
			this->Text = L"WorktimeForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void quit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~WorktimeForm();
}

	private: System::Void accept_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckInput()) {
			breaktime->Enabled=true;
			label2->Enabled=true;
			save->Enabled=true;
			save->UseVisualStyleBackColor = true;
			save->Visible = true;
			accept->Enabled=false;
			accept->UseVisualStyleBackColor = false;
			accept->Visible = false;
		}
		else {
			showErro("Please enter only Numbers");
		}
	}

	private: System::Void breaktime_calc(System::Object^ sender, System::EventArgs^ e) {
		breaktime->Enabled = false;
		label2->Enabled = false;
		save->Enabled = false;
		save->UseVisualStyleBackColor = false;
		save->Visible = false;
		accept->Enabled = true;
		accept->UseVisualStyleBackColor = true;
		accept->Visible = true;
	}

private: System::Void wt_beginn_t_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	breaktime->Enabled = false;
	label2->Enabled = false;
	save->Enabled = false;
	save->UseVisualStyleBackColor = false;
	save->Visible = false;
	accept->Enabled = true;
	accept->UseVisualStyleBackColor = true;
	accept->Visible = true;
}
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (Data[] == NULL) {												//überprüfen ob breaktime stimmt
	SqlController::AddWTTime(1, 1, 1, 1,  wtBegin, wtEnd, breakt, 1);
	User::Monat.makeSpace(User::Monat.activeday);
	User::Monat.worktime_start[User::Monat.activeday - 1] = wtBegin;
	User::Monat.worktime_end[User::Monat.activeday - 1] = wtEnd;
	User::Monat.breaktime[User::Monat.activeday - 1] = breakt;
	User::sum_wt();

	/*}
	else {
		SqlController::ChangeWTTime(1, 1, 1, wtBegin, wtEnd, breakt);
	}*/
	this->~WorktimeForm();
}
	
private: System::Void breaktime_changed(System::Object^ sender, System::EventArgs^ e) {
	if (CheckBreak()==false) {
		
		showErro("Please enter only Numbers");
		breaktime->Clear();
		breaktime->AppendText(breakt.ToString());
		

	}

}
};


}
