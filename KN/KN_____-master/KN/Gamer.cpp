#include "Gamer.h"

void Gamer::SetField(GamerStatus mode, int m)
{
	if (mode == 0)
		Status = Computer;
	else if (mode == 1)
		Status = Player;
	else if (mode == 2)
		Status = Player1;
	else
		Status = Player2;

	mark = m;
	
}
