#pragma once
#include "MyCalendar.h"

namespace STJam_Scheduler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für SickDaysForm
	/// </summary>
	public ref class SickDaysForm : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Button^ thisBtn;
	private: System::Windows::Forms::Label^ DurationLabel;
	public:

	public:
		System::Windows::Forms::CheckBox^ SickCheckBoxValue;
		SickDaysForm(System::Windows::Forms::Button^ Btn)
		{
			InitializeComponent();
			SickCheckBoxValue = SickCheckBox;
			thisBtn = Btn;
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~SickDaysForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ SickCheckBox;
	private: System::Windows::Forms::NumericUpDown^ durationDays;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SickCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->durationDays = (gcnew System::Windows::Forms::NumericUpDown());
			this->DurationLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationDays))->BeginInit();
			this->SuspendLayout();
			// 
			// SickCheckBox
			// 
			this->SickCheckBox->AutoSize = true;
			this->SickCheckBox->Location = System::Drawing::Point(41, 92);
			this->SickCheckBox->Name = L"SickCheckBox";
			this->SickCheckBox->Size = System::Drawing::Size(47, 17);
			this->SickCheckBox->TabIndex = 0;
			this->SickCheckBox->Text = L"Sick";
			this->SickCheckBox->UseVisualStyleBackColor = true;
			this->SickCheckBox->CheckedChanged += gcnew System::EventHandler(this, &SickDaysForm::SickCheckBox_CheckedChanged);
			// 
			// durationDays
			// 
			this->durationDays->Location = System::Drawing::Point(0, 0);
			this->durationDays->Name = L"durationDays";
			this->durationDays->Size = System::Drawing::Size(120, 20);
			this->durationDays->TabIndex = 0;
			// 
			// DurationLabel
			// 
			this->DurationLabel->AutoSize = true;
			this->DurationLabel->Location = System::Drawing::Point(38, 128);
			this->DurationLabel->Name = L"DurationLabel";
			this->DurationLabel->Size = System::Drawing::Size(81, 13);
			this->DurationLabel->TabIndex = 1;
			this->DurationLabel->Text = L"Duration (days):";
			// 
			// SickDaysForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(231, 261);
			this->Controls->Add(this->SickCheckBox);
			this->Name = L"SickDaysForm";
			this->Text = L"SickDaysForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationDays))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SickCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		MyCalendar::setSickDay(thisBtn);
		this->Controls->Add(this->durationDays);
		this->Controls->Add(this->DurationLabel);
		// 
		// durationDays
		// 
		this->durationDays->Location = System::Drawing::Point(134, 128);
		this->durationDays->Name = L"durationDays";
		this->durationDays->Size = System::Drawing::Size(43, 20);
		this->durationDays->TabIndex = 2;
		this->durationDays->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
		this->durationDays->ValueChanged += gcnew System::EventHandler(this, &SickDaysForm::durationDays_ValueChanged);
	}
	private: System::Void durationDays_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		MyCalendar::setSickDay(thisBtn);	// thisBtn -> ersetzen durch getNextButton()
	}
};
}
