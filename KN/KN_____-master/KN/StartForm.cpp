#include "StartForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KN::StartForm form;
	Application::Run(% form);
}
/*
KN::StartForm::StartForm(void)
{
	InitializeComponent();

	sound = gcnew System::Media::SoundPlayer("..\\Resources\\1.wav");
}*/

System::Void KN::StartForm::toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play();
	MessageBox::Show("Игра \"Крестики-нолики\".", "Информация о программе!");
}

System::Void KN::StartForm::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play();
	Application::Exit();
}

System::Void KN::StartForm::buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play();

	int indexGameMode = listBoxGameMode->SelectedIndex;
	if (indexGameMode == -1) {
		MessageBox::Show("Выберите режим игры!", "Внимание!");
		return;
	}

	int size;
	size = Convert::ToInt32(numericUpDownSizeMap->Value);

	numericUpDownLength->Maximum = size;
	int length = Convert::ToInt32(numericUpDownLength->Value);

	GameForm^ form = gcnew GameForm();
	form->rows = size;
	form->columns = size;
	form->length = length;
	form->selectedGameMode = indexGameMode;
	form->Show();
	this->Hide();
}
