#pragma once
#include "Header.h"

class Game
{
public:
	void Run()
	{
		cout << "Start game" << endl;

		Character* character = CreateCharater();
		character->Print();

		cout << "End game" << endl;
	}

	virtual Character* CreateCharater() = 0;
};

class HumanGame : public Game 
{
	// Inherited via Game
	virtual Character* CreateCharater() override;
};

class ElfGame : public Game
{
	// Inherited via Game
	virtual Character* CreateCharater() override;
};