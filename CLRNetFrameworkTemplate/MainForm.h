#pragma once
#include <ctype.h>
#include <iostream>

typedef long long ll;

namespace CLRNetFrameworkTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txbNumber;
	private: System::Windows::Forms::TextBox^ txbResult;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txbNumber = (gcnew System::Windows::Forms::TextBox());
			this->txbResult = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txbNumber
			// 
			this->txbNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbNumber->Location = System::Drawing::Point(12, 63);
			this->txbNumber->MaxLength = 15;
			this->txbNumber->Name = L"txbNumber";
			this->txbNumber->Size = System::Drawing::Size(504, 39);
			this->txbNumber->TabIndex = 0;
			this->txbNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txbNumber_KeyPress);
			// 
			// txbResult
			// 
			this->txbResult->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txbResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbResult->Location = System::Drawing::Point(12, 159);
			this->txbResult->Name = L"txbResult";
			this->txbResult->ReadOnly = true;
			this->txbResult->Size = System::Drawing::Size(504, 39);
			this->txbResult->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"¬ведите число:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"–езультат:";
			// 
			// btn
			// 
			this->btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn->Location = System::Drawing::Point(12, 223);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(504, 74);
			this->btn->TabIndex = 4;
			this->btn->Text = L"”множить на 5";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &MainForm::btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(528, 309);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbResult);
			this->Controls->Add(this->txbNumber);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"”множатель";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txbNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//We only allow backspace/ other control symbols / digits
		if (!iscntrl((unsigned char)e->KeyChar) &&
			!isdigit((unsigned char)e->KeyChar))
		{
			e->Handled = true;
		}
	}
	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//If txbNumber is empty
		if (String::IsNullOrEmpty(txbNumber->Text)) {
			txbResult->Text = "¬ведите число!";
			return;
		}
		//Else

		//Getting text from txbNumber, converting to long long
		ll number = Convert::ToInt64(txbNumber->Text);
		//Counting, converting result to String and showing it
		txbResult->Text = Convert::ToString(5 * number);
	}
	};
}