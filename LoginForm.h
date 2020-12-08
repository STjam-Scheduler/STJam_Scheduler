#pragma once
#include "CalendarForm.h"


namespace Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		//Function to check Username + Password, return true if correct, output corresponding Error in Window
		bool CheckInput();
	private: System::Windows::Forms::TextBox^ UNameBox;
	private: System::Windows::Forms::TextBox^ PwBox;
	private: System::Windows::Forms::Label^ UNameLabel;
	private: System::Windows::Forms::Label^ PwLabel;
	protected:





	private: System::Windows::Forms::Button^ Loginbutton;
	private: System::Windows::Forms::Label^ DebugLabel;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->UNameBox = (gcnew System::Windows::Forms::TextBox());
			this->PwBox = (gcnew System::Windows::Forms::TextBox());
			this->UNameLabel = (gcnew System::Windows::Forms::Label());
			this->PwLabel = (gcnew System::Windows::Forms::Label());
			this->Loginbutton = (gcnew System::Windows::Forms::Button());
			this->DebugLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// UNameBox
			// 
			this->UNameBox->Location = System::Drawing::Point(192, 84);
			this->UNameBox->Name = L"UNameBox";
			this->UNameBox->Size = System::Drawing::Size(100, 20);
			this->UNameBox->TabIndex = 1;
			this->UNameBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::UNameBox_TextChanged);
			// 
			// PwBox
			// 
			this->PwBox->Location = System::Drawing::Point(192, 110);
			this->PwBox->Name = L"PwBox";
			this->PwBox->PasswordChar = '*';
			this->PwBox->Size = System::Drawing::Size(100, 20);
			this->PwBox->TabIndex = 2;
			this->PwBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::PwBox_TextChanged);
			// 
			// UNameLabel
			// 
			this->UNameLabel->AutoSize = true;
			this->UNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UNameLabel->Location = System::Drawing::Point(131, 84);
			this->UNameLabel->Name = L"UNameLabel";
			this->UNameLabel->Size = System::Drawing::Size(55, 13);
			this->UNameLabel->TabIndex = 3;
			this->UNameLabel->Text = L"Username";
			// 
			// PwLabel
			// 
			this->PwLabel->AutoSize = true;
			this->PwLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PwLabel->Location = System::Drawing::Point(131, 110);
			this->PwLabel->Name = L"PwLabel";
			this->PwLabel->Size = System::Drawing::Size(53, 13);
			this->PwLabel->TabIndex = 4;
			this->PwLabel->Text = L"Password";
			// 
			// Loginbutton
			// 
			this->Loginbutton->Location = System::Drawing::Point(192, 145);
			this->Loginbutton->Name = L"Loginbutton";
			this->Loginbutton->Size = System::Drawing::Size(75, 23);
			this->Loginbutton->TabIndex = 5;
			this->Loginbutton->Text = L"Sign In";
			this->Loginbutton->UseVisualStyleBackColor = true;
			this->Loginbutton->Click += gcnew System::EventHandler(this, &LoginForm::Loginbutton_Click);
			// 
			// DebugLabel
			// 
			this->DebugLabel->AutoSize = true;
			this->DebugLabel->ForeColor = System::Drawing::Color::Red;
			this->DebugLabel->Location = System::Drawing::Point(189, 171);
			this->DebugLabel->Name = L"DebugLabel";
			this->DebugLabel->Size = System::Drawing::Size(0, 13);
			this->DebugLabel->TabIndex = 6;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 261);
			this->Controls->Add(this->DebugLabel);
			this->Controls->Add(this->Loginbutton);
			this->Controls->Add(this->PwLabel);
			this->Controls->Add(this->UNameLabel);
			this->Controls->Add(this->PwBox);
			this->Controls->Add(this->UNameBox);
			this->Name = L"LoginForm";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void UNameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PwBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Loginbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (CheckInput()) {
			Window::CalendarForm^ frm = gcnew Window::CalendarForm();
			frm->Location = this->Location;
			frm->Show();
			this->Hide();
		}

	}

};
}
