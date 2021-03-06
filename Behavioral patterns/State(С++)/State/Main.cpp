// State.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
	Character* character = new Character();
	
	character->handleInput(ConsoleKey::ArrowUp);
	character->update();

	character->handleInput(ConsoleKey::ArrowDown);
	character->update();
	
	int key;
	do {
		key = _getch();
		if (key == (int)ConsoleKey::Arrow)
			key = _getch();

		character->handleInput((ConsoleKey)key);
		character->update();

	} while (key != (int)ConsoleKey::Esc);
	
}

