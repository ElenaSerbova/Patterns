#include "Game.h"

Character* HumanGame::CreateCharater()
{
	return new Human;
}

Character* ElfGame::CreateCharater()
{
	return new Elf;
}
