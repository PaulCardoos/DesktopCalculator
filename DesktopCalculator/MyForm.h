#pragma once

namespace DesktopCalculator {

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
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::TextBox^ answerDisplay;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnSeven;
	private: System::Windows::Forms::Button^ btnPlus;



	private: System::Windows::Forms::Button^ btnNine;

	private: System::Windows::Forms::Button^ btnEight;
	private: System::Windows::Forms::Button^ btnFour;
	private: System::Windows::Forms::Button^ btnMinus;



	private: System::Windows::Forms::Button^ btnSix;

	private: System::Windows::Forms::Button^ btnFive;
	private: System::Windows::Forms::Button^ btnOne;
	private: System::Windows::Forms::Button^ btnStar;



	private: System::Windows::Forms::Button^ btnThree;

	private: System::Windows::Forms::Button^ btnTwo;
	private: System::Windows::Forms::Button^ btnZero;
	private: System::Windows::Forms::Button^ btnSlash;



	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btnDot;



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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->answerDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnStar = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnSlash = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(8, 100);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(80, 80);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::handleBackspace);
			// 
			// answerDisplay
			// 
			this->answerDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->answerDisplay->Location = System::Drawing::Point(8, 8);
			this->answerDisplay->Multiline = true;
			this->answerDisplay->Name = L"answerDisplay";
			this->answerDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->answerDisplay->Size = System::Drawing::Size(336, 86);
			this->answerDisplay->TabIndex = 1;
			this->answerDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->answerDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(178, 100);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(166, 80);
			this->btnCE->TabIndex = 3;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::handleClearAll);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(92, 100);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(80, 80);
			this->btnC->TabIndex = 4;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::handleClear);
			// 
			// btnSeven
			// 
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(8, 186);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(80, 80);
			this->btnSeven->TabIndex = 0;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(264, 186);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(80, 80);
			this->btnPlus->TabIndex = 2;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnNine
			// 
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(178, 186);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(80, 80);
			this->btnNine->TabIndex = 3;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnEight
			// 
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEight->Location = System::Drawing::Point(92, 186);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(80, 80);
			this->btnEight->TabIndex = 4;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = true;
			this->btnEight->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnFour
			// 
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(8, 272);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(80, 80);
			this->btnFour->TabIndex = 0;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(264, 272);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(80, 80);
			this->btnMinus->TabIndex = 2;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnSix
			// 
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSix->Location = System::Drawing::Point(178, 272);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(80, 80);
			this->btnSix->TabIndex = 3;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = true;
			this->btnSix->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnFive
			// 
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(92, 272);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(80, 80);
			this->btnFive->TabIndex = 4;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnOne
			// 
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(8, 358);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(80, 80);
			this->btnOne->TabIndex = 0;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnStar
			// 
			this->btnStar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStar->Location = System::Drawing::Point(264, 358);
			this->btnStar->Name = L"btnStar";
			this->btnStar->Size = System::Drawing::Size(80, 80);
			this->btnStar->TabIndex = 2;
			this->btnStar->Text = L"*";
			this->btnStar->UseVisualStyleBackColor = true;
			this->btnStar->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnThree
			// 
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->Location = System::Drawing::Point(178, 358);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(80, 80);
			this->btnThree->TabIndex = 3;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = true;
			this->btnThree->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnTwo
			// 
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(94, 358);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(80, 80);
			this->btnTwo->TabIndex = 4;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(6, 444);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(80, 80);
			this->btnZero->TabIndex = 0;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnSlash
			// 
			this->btnSlash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSlash->Location = System::Drawing::Point(262, 444);
			this->btnSlash->Name = L"btnSlash";
			this->btnSlash->Size = System::Drawing::Size(80, 80);
			this->btnSlash->TabIndex = 2;
			this->btnSlash->Text = L"/";
			this->btnSlash->UseVisualStyleBackColor = true;
			this->btnSlash->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(176, 444);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(80, 80);
			this->btnEqual->TabIndex = 3;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::handleResult);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(92, 444);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(80, 80);
			this->btnDot->TabIndex = 4;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::handleDecimal);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(351, 526);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnEight);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnThree);
			this->Controls->Add(this->btnSix);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnSlash);
			this->Controls->Add(this->btnStar);
			this->Controls->Add(this->btnZero);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->btnSeven);
			this->Controls->Add(this->answerDisplay);
			this->Controls->Add(this->btnBack);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ action;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Num = safe_cast<Button^>(sender);
		if (answerDisplay->Text == "0") {
			answerDisplay->Text = Num->Text;
		}
		else {
			answerDisplay->Text = answerDisplay->Text + Num->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumOper = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(answerDisplay->Text);
	answerDisplay->Text = "";
	action = NumOper->Text;
}
private: System::Void handleDecimal(System::Object^ sender, System::EventArgs^ e) {
	 
	if(!answerDisplay->Text->Contains(".")){
		answerDisplay->Text = answerDisplay->Text + ".";
	}
}
private: System::Void handleResult(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(answerDisplay->Text);
	Button^ Equals = safe_cast<Button^>(sender);
	
	if (action == "+") {
		result = firstDigit + secondDigit;
		answerDisplay->Text = System::Convert::ToString(result);
	}
	else if (action == "-") {
		result = firstDigit - secondDigit;
		answerDisplay->Text = System::Convert::ToString(result);
	}
	else if (action == "*") {
		result = firstDigit * secondDigit;
		answerDisplay->Text = System::Convert::ToString(result);
	}
	else {
		if (!secondDigit == 0) {
			result = firstDigit / secondDigit;
			answerDisplay->Text = System::Convert::ToString(result);
		}
		else {
			answerDisplay->Text = "Error.. Clear and try again";
		}
	}
}

private: System::Void handleClear(System::Object^ sender, System::EventArgs^ e) {
	answerDisplay->Text = "";
}

private: System::Void handleClearAll(System::Object^ sender, System::EventArgs^ e) {
	answerDisplay->Text = "";
	firstDigit = 0;
	secondDigit = 0; 
}
private: System::Void handleBackspace(System::Object^ sender, System::EventArgs^ e) {
	if (answerDisplay->Text->Length > 0) {
		answerDisplay->Text = answerDisplay->Text->Remove(answerDisplay->Text->Length - 1, 1);
	}
}
};
}
