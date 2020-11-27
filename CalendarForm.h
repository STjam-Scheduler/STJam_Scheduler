#pragma once
#include <cstdio>
#include <msclr\marshal_cppstd.h>
#include "MyCalendar.h"

namespace Window {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für CalendarForm
	/// </summary>
	
	
	public ref class CalendarForm : public System::Windows::Forms::Form
	{
	public:
		static cli::array<Button^, 2>^ buttons = gcnew cli::array<Button^, 2>(6,7); 
		static System::Windows::Forms::Label^ yearLabel;
		static System::Windows::Forms::Label^ monthLabel;
	public:

	public:
		CalendarForm(void)
		{
			InitializeComponent();
			buttons[0,0] = button1;
			buttons[0,1] = button2;
			buttons[0,2] = button3;
			buttons[0,3] = button4;
			buttons[0,4] = button5;
			buttons[0,5] = button6;
			buttons[0,6] = button7;
			buttons[1,0] = button8;
			buttons[1,1] = button9;
			buttons[1,2] = button10;
			buttons[1,3] = button11;
			buttons[1,4] = button12;
			buttons[1,5] = button13;
			buttons[1,6] = button14;
			buttons[2,0] = button15;
			buttons[2,1] = button16;
			buttons[2,2] = button17;
			buttons[2,3] = button18;
			buttons[2,4] = button19;
			buttons[2,5] = button20;
			buttons[2,6] = button21;
			buttons[3,0] = button22;
			buttons[3,1] = button23;
			buttons[3,2] = button24;
			buttons[3,3] = button25;
			buttons[3,4] = button26;
			buttons[3,5] = button27;
			buttons[3,6] = button28;
			buttons[4,0] = button29;
			buttons[4,1] = button30;
			buttons[4,2] = button31;
			buttons[4,3] = button32;
			buttons[4,4] = button33;
			buttons[4,5] = button34;
			buttons[4,6] = button35;
			buttons[5,0] = button36;
			buttons[5,1] = button37;
			buttons[5,2] = button38;
			buttons[5,3] = button39;
			buttons[5,4] = button40;
			buttons[5,5] = button41;
			buttons[5,6] = button42;

			monthLabel = mLabel;
			yearLabel = yLabel;
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~CalendarForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Label^ mLabel;
	private: System::Windows::Forms::Label^ yLabel;



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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->mLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button11);
			this->flowLayoutPanel1->Controls->Add(this->button12);
			this->flowLayoutPanel1->Controls->Add(this->button13);
			this->flowLayoutPanel1->Controls->Add(this->button14);
			this->flowLayoutPanel1->Controls->Add(this->button15);
			this->flowLayoutPanel1->Controls->Add(this->button16);
			this->flowLayoutPanel1->Controls->Add(this->button17);
			this->flowLayoutPanel1->Controls->Add(this->button18);
			this->flowLayoutPanel1->Controls->Add(this->button19);
			this->flowLayoutPanel1->Controls->Add(this->button20);
			this->flowLayoutPanel1->Controls->Add(this->button21);
			this->flowLayoutPanel1->Controls->Add(this->button22);
			this->flowLayoutPanel1->Controls->Add(this->button23);
			this->flowLayoutPanel1->Controls->Add(this->button24);
			this->flowLayoutPanel1->Controls->Add(this->button25);
			this->flowLayoutPanel1->Controls->Add(this->button26);
			this->flowLayoutPanel1->Controls->Add(this->button27);
			this->flowLayoutPanel1->Controls->Add(this->button28);
			this->flowLayoutPanel1->Controls->Add(this->button29);
			this->flowLayoutPanel1->Controls->Add(this->button30);
			this->flowLayoutPanel1->Controls->Add(this->button31);
			this->flowLayoutPanel1->Controls->Add(this->button32);
			this->flowLayoutPanel1->Controls->Add(this->button33);
			this->flowLayoutPanel1->Controls->Add(this->button34);
			this->flowLayoutPanel1->Controls->Add(this->button35);
			this->flowLayoutPanel1->Controls->Add(this->button36);
			this->flowLayoutPanel1->Controls->Add(this->button37);
			this->flowLayoutPanel1->Controls->Add(this->button38);
			this->flowLayoutPanel1->Controls->Add(this->button39);
			this->flowLayoutPanel1->Controls->Add(this->button40);
			this->flowLayoutPanel1->Controls->Add(this->button41);
			this->flowLayoutPanel1->Controls->Add(this->button42);
			this->flowLayoutPanel1->Location = System::Drawing::Point(6, 119);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1261, 721);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 120);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalendarForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(180, 0);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 120);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(360, 0);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 120);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(540, 0);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 120);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(720, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 120);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(900, 0);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 120);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1080, 0);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(180, 120);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 120);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(180, 120);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(180, 120);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 120);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(360, 120);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(180, 120);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(540, 120);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(180, 120);
			this->button11->TabIndex = 10;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(720, 120);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(180, 120);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(900, 120);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(180, 120);
			this->button13->TabIndex = 12;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1080, 120);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(180, 120);
			this->button14->TabIndex = 13;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(0, 240);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(180, 120);
			this->button15->TabIndex = 14;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(180, 240);
			this->button16->Margin = System::Windows::Forms::Padding(0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(180, 120);
			this->button16->TabIndex = 15;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(360, 240);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(180, 120);
			this->button17->TabIndex = 16;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(540, 240);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(180, 120);
			this->button18->TabIndex = 17;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(720, 240);
			this->button19->Margin = System::Windows::Forms::Padding(0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(180, 120);
			this->button19->TabIndex = 18;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(900, 240);
			this->button20->Margin = System::Windows::Forms::Padding(0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(180, 120);
			this->button20->TabIndex = 19;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(1080, 240);
			this->button21->Margin = System::Windows::Forms::Padding(0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(180, 120);
			this->button21->TabIndex = 20;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(0, 360);
			this->button22->Margin = System::Windows::Forms::Padding(0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(180, 120);
			this->button22->TabIndex = 21;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(180, 360);
			this->button23->Margin = System::Windows::Forms::Padding(0);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(180, 120);
			this->button23->TabIndex = 22;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(360, 360);
			this->button24->Margin = System::Windows::Forms::Padding(0);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(180, 120);
			this->button24->TabIndex = 23;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(540, 360);
			this->button25->Margin = System::Windows::Forms::Padding(0);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(180, 120);
			this->button25->TabIndex = 24;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(720, 360);
			this->button26->Margin = System::Windows::Forms::Padding(0);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(180, 120);
			this->button26->TabIndex = 25;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(900, 360);
			this->button27->Margin = System::Windows::Forms::Padding(0);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(180, 120);
			this->button27->TabIndex = 26;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(1080, 360);
			this->button28->Margin = System::Windows::Forms::Padding(0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(180, 120);
			this->button28->TabIndex = 27;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(0, 480);
			this->button29->Margin = System::Windows::Forms::Padding(0);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(180, 120);
			this->button29->TabIndex = 28;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(180, 480);
			this->button30->Margin = System::Windows::Forms::Padding(0);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(180, 120);
			this->button30->TabIndex = 29;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(360, 480);
			this->button31->Margin = System::Windows::Forms::Padding(0);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(180, 120);
			this->button31->TabIndex = 30;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(540, 480);
			this->button32->Margin = System::Windows::Forms::Padding(0);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(180, 120);
			this->button32->TabIndex = 31;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(720, 480);
			this->button33->Margin = System::Windows::Forms::Padding(0);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(180, 120);
			this->button33->TabIndex = 32;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(900, 480);
			this->button34->Margin = System::Windows::Forms::Padding(0);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(180, 120);
			this->button34->TabIndex = 33;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(1080, 480);
			this->button35->Margin = System::Windows::Forms::Padding(0);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(180, 120);
			this->button35->TabIndex = 34;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(0, 600);
			this->button36->Margin = System::Windows::Forms::Padding(0);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(180, 120);
			this->button36->TabIndex = 35;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(180, 600);
			this->button37->Margin = System::Windows::Forms::Padding(0);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(180, 120);
			this->button37->TabIndex = 36;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(360, 600);
			this->button38->Margin = System::Windows::Forms::Padding(0);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(180, 120);
			this->button38->TabIndex = 37;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(540, 600);
			this->button39->Margin = System::Windows::Forms::Padding(0);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(180, 120);
			this->button39->TabIndex = 38;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(720, 600);
			this->button40->Margin = System::Windows::Forms::Padding(0);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(180, 120);
			this->button40->TabIndex = 39;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(900, 600);
			this->button41->Margin = System::Windows::Forms::Padding(0);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(180, 120);
			this->button41->TabIndex = 40;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(1080, 600);
			this->button42->Margin = System::Windows::Forms::Padding(0);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(180, 120);
			this->button42->TabIndex = 41;
			this->button42->Text = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->label1);
			this->flowLayoutPanel2->Controls->Add(this->label2);
			this->flowLayoutPanel2->Controls->Add(this->label3);
			this->flowLayoutPanel2->Controls->Add(this->label4);
			this->flowLayoutPanel2->Controls->Add(this->label5);
			this->flowLayoutPanel2->Controls->Add(this->label6);
			this->flowLayoutPanel2->Controls->Add(this->label7);
			this->flowLayoutPanel2->Location = System::Drawing::Point(6, 75);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(1260, 38);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->MinimumSize = System::Drawing::Size(180, 30);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label1->Size = System::Drawing::Size(180, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Monday";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(180, 0);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->MinimumSize = System::Drawing::Size(180, 30);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label2->Size = System::Drawing::Size(180, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tuesday";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(360, 0);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->MinimumSize = System::Drawing::Size(180, 30);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label3->Size = System::Drawing::Size(180, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wednesday";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(540, 0);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->MinimumSize = System::Drawing::Size(180, 30);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label4->Size = System::Drawing::Size(180, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Thursday";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(720, 0);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->MinimumSize = System::Drawing::Size(180, 30);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label5->Size = System::Drawing::Size(180, 38);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Friday";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(900, 0);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->MinimumSize = System::Drawing::Size(180, 30);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label6->Size = System::Drawing::Size(180, 38);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Saturday";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1080, 0);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->MinimumSize = System::Drawing::Size(180, 30);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->label7->Size = System::Drawing::Size(180, 38);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Sunday";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->yLabel);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->mLabel);
			this->groupBox1->Controls->Add(this->flowLayoutPanel1);
			this->groupBox1->Controls->Add(this->flowLayoutPanel2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1273, 846);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calendar";
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yLabel->Location = System::Drawing::Point(1116, 16);
			this->yLabel->MinimumSize = System::Drawing::Size(150, 40);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(150, 40);
			this->yLabel->TabIndex = 5;
			this->yLabel->Text = L"2077";
			this->yLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(726, 16);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(56, 56);
			this->button44->TabIndex = 4;
			this->button44->Text = L">";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &CalendarForm::button44_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(484, 16);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(56, 56);
			this->button43->TabIndex = 3;
			this->button43->Text = L"<";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &CalendarForm::button43_Click);
			// 
			// mLabel
			// 
			this->mLabel->AutoSize = true;
			this->mLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mLabel->Location = System::Drawing::Point(546, 16);
			this->mLabel->MinimumSize = System::Drawing::Size(180, 50);
			this->mLabel->Name = L"mLabel";
			this->mLabel->Size = System::Drawing::Size(180, 50);
			this->mLabel->TabIndex = 2;
			this->mLabel->Text = L"Month";
			this->mLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CalendarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CalendarForm";
			this->Text = L"STJam Scheduler ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &CalendarForm::CalendarForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//String^ s = gcnew String(char* / string)
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//button1->Text = gcnew String("12131231");
}
private: System::Void CalendarForm_Load(System::Object^ sender, System::EventArgs^ e) {
	MyCalendar::initializeCalendar();
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	MyCalendar::nextMonth();
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	MyCalendar::prevMonth();
}
};
}
