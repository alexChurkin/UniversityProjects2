#pragma once

namespace AlgebraOfSets {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	public ref class AOSForm : public System::Windows::Forms::Form
	{
	public:
		AOSForm(void)
		{
			InitializeComponent();
			//TODO: добавьте код конструктора

		}

	protected:
		~AOSForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txbA;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txbB;
	private: System::Windows::Forms::TextBox^ txbRes;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txbN;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AOSForm::typeid));
			this->txbA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txbB = (gcnew System::Windows::Forms::TextBox());
			this->txbRes = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txbN = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txbA
			// 
			this->txbA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->txbA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbA->ForeColor = System::Drawing::Color::White;
			this->txbA->Location = System::Drawing::Point(90, 163);
			this->txbA->Name = L"txbA";
			this->txbA->Size = System::Drawing::Size(550, 48);
			this->txbA->TabIndex = 0;
			this->txbA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AOSForm::txbA_KeyPress);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"PT Mono", 20, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(854, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Алгебра множеств";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(26, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 46);
			this->label2->TabIndex = 2;
			this->label2->Text = L"A:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(26, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 46);
			this->label3->TabIndex = 3;
			this->label3->Text = L"B:";
			// 
			// txbB
			// 
			this->txbB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->txbB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbB->ForeColor = System::Drawing::Color::White;
			this->txbB->Location = System::Drawing::Point(90, 278);
			this->txbB->Name = L"txbB";
			this->txbB->Size = System::Drawing::Size(550, 48);
			this->txbB->TabIndex = 4;
			this->txbB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AOSForm::txbB_KeyPress);
			// 
			// txbRes
			// 
			this->txbRes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->txbRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbRes->ForeColor = System::Drawing::Color::White;
			this->txbRes->Location = System::Drawing::Point(253, 411);
			this->txbRes->Name = L"txbRes";
			this->txbRes->ReadOnly = true;
			this->txbRes->Size = System::Drawing::Size(387, 48);
			this->txbRes->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(26, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 46);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Результат:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(630, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 46);
			this->label5->TabIndex = 8;
			this->label5->Text = L"N =";
			// 
			// txbN
			// 
			this->txbN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->txbN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txbN->ForeColor = System::Drawing::Color::White;
			this->txbN->Location = System::Drawing::Point(719, 81);
			this->txbN->MaxLength = 6;
			this->txbN->Name = L"txbN";
			this->txbN->Size = System::Drawing::Size(130, 48);
			this->txbN->TabIndex = 7;
			this->txbN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AOSForm::txbN_KeyPress);
			// 
			// AOSForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(878, 544);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txbN);
			this->Controls->Add(this->txbRes);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txbB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"AOSForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Алгебра множеств";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void txbN_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
	{
		e->Handled = true;
	}
}
private: System::Void txbA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',')
	{
		e->Handled = true;
	}
}
private: System::Void txbB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',')
	{
		e->Handled = true;
	}
}
};
}
