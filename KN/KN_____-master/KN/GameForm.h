#pragma once

#include "GameMap.h"
#include "Gamer.h"

#include <Windows.h>

namespace KN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView;
	protected:
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ Status;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âåğíóòüñÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âêëÂûêëÇâóêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->Status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âåğíóòüñÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âêëÂûêëÇâóêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 41);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(486, 398);
			this->dataGridView->TabIndex = 5;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GameForm::dataGridView_CellContentClick);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Status });
			this->statusStrip1->Location = System::Drawing::Point(0, 439);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(486, 38);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// Status
			// 
			this->Status->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F));
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(113, 33);
			this->Status->Text = L"Õîä èãğîêà";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìåíşToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(486, 41);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->âåğíóòüñÿToolStripMenuItem, this->âêëÂûêëÇâóêToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(79, 37);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(219, 38);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// âåğíóòüñÿToolStripMenuItem
			// 
			this->âåğíóòüñÿToolStripMenuItem->Name = L"âåğíóòüñÿToolStripMenuItem";
			this->âåğíóòüñÿToolStripMenuItem->Size = System::Drawing::Size(219, 38);
			this->âåğíóòüñÿToolStripMenuItem->Text = L"Âåğíóòüñÿ";
			this->âåğíóòüñÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::âåğíóòüñÿToolStripMenuItem_Click);
			// 
			// âêëÂûêëÇâóêToolStripMenuItem
			// 
			this->âêëÂûêëÇâóêToolStripMenuItem->Name = L"âêëÂûêëÇâóêToolStripMenuItem";
			this->âêëÂûêëÇâóêToolStripMenuItem->Size = System::Drawing::Size(219, 38);
			this->âêëÂûêëÇâóêToolStripMenuItem->Text = L"Âêë/Âûêë çâóê";
			this->âêëÂûêëÇâóêToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::âêëÂûêëÇâóêToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F));
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(141, 37);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 20.25F));
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(84, 37);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::âûõîäToolStripMenuItem_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 477);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"GameForm";
			this->Text = L"Èãğà Êğåñòèêè-Íîëèêè";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//ïîëÿ èãğû
	public: int rows;
	public: int columns;
	public: int length;
	public: int selectedGameMode;
	private: Random^ rand;
	private: System::Media::SoundPlayer^ soundClick;
	private: System::Media::SoundPlayer^ soundEndGame;
		   //ìåòîäû èãğû
	private: void GameLogic();
	private: void Update();
	private: void NewGame();
	private: void StepAI();
	private: void UpdateGameGrid();
	private: void CreateGameGrid(Vector2);
	private: void SetPositionPlayer(Vector2);
		   //ñîáûòèÿ èãğû
	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âåğíóòüñÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âêëÂûêëÇâóêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}
