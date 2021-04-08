#pragma once
#include "pch.h"

class Character {	
	ICharacterState* state;

public:
	Character();

	ICharacterState* getState();
	void setState(ICharacterState* newState);

	void handleInput(ConsoleKey key);
	void update();
};

