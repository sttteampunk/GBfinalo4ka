#pragma once

namespace KN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			sound = gcnew System::Media::SoundPlayer("..\\Resources\\1.wav");
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonStartGame;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSizeMap;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLength;
	private: System::Windows::Forms::ListBox^ listBoxGameMode;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonStartGame = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSizeMap = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBoxGameMode = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSizeMap))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStartGame
			// 
			this->buttonStartGame->BackColor = System::Drawing::Color::Pink;
			this->buttonStartGame->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonStartGame->ForeColor = System::Drawing::Color::Black;
			this->buttonStartGame->Location = System::Drawing::Point(16, 196);
			this->buttonStartGame->Name = L"buttonStartGame";
			this->buttonStartGame->Size = System::Drawing::Size(371, 52);
			this->buttonStartGame->TabIndex = 16;
			this->buttonStartGame->Text = L"начать";
			this->buttonStartGame->UseVisualStyleBackColor = false;
			this->buttonStartGame->Click += gcnew System::EventHandler(this, &StartForm::buttonStartGame_Click);
			// 
			// numericUpDownSizeMap
			// 
			this->numericUpDownSizeMap->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownSizeMap->Location = System::Drawing::Point(225, 94);
			this->numericUpDownSizeMap->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDownSizeMap->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDownSizeMap->Name = L"numericUpDownSizeMap";
			this->numericUpDownSizeMap->Size = System::Drawing::Size(162, 40);
			this->numericUpDownSizeMap->TabIndex = 15;
			this->numericUpDownSizeMap->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDownLength
			// 
			this->numericUpDownLength->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownLength->Location = System::Drawing::Point(328, 143);
			this->numericUpDownLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDownLength->Name = L"numericUpDownLength";
			this->numericUpDownLength->Size = System::Drawing::Size(59, 40);
			this->numericUpDownLength->TabIndex = 14;
			this->numericUpDownLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// listBoxGameMode
			// 
			this->listBoxGameMode->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxGameMode->FormattingEnabled = true;
			this->listBoxGameMode->ItemHeight = 33;
			this->listBoxGameMode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"PvP", L"PvE" });
			this->listBoxGameMode->Location = System::Drawing::Point(166, 50);
			this->listBoxGameMode->Name = L"listBoxGameMode";
			this->listBoxGameMode->Size = System::Drawing::Size(221, 37);
			this->listBoxGameMode->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(10, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(312, 33);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Длинна комбинации для победы:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(10, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 33);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Размер игрового поля:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(10, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 33);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Игровой режим:";
			this->label4->Click += gcnew System::EventHandler(this, &StartForm::label4_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(417, 41);
			this->menuStrip2->TabIndex = 12;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(141, 37);
			this->toolStripMenuItem1->Text = L"О программе";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &StartForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(84, 37);
			this->toolStripMenuItem2->Text = L"Выход";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &StartForm::toolStripMenuItem2_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(417, 268);
			this->Controls->Add(this->buttonStartGame);
			this->Controls->Add(this->numericUpDownSizeMap);
			this->Controls->Add(this->numericUpDownLength);
			this->Controls->Add(this->listBoxGameMode);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->menuStrip2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(433, 307);
			this->MinimumSize = System::Drawing::Size(433, 307);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Параметры игры Крестики-Нолики";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSizeMap))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Media::SoundPlayer^ sound;

	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
