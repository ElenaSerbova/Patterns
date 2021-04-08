#pragma once
#include "pch.h"

class Character;

class ICharacterState
{
public:	
	virtual ~ICharacterState() = 0 {};
	virtual void handleInput(Character* character, ConsoleKey key) = 0;
	virtual void update(Character* character) = 0;
};

class OnGroundState : public ICharacterState {
public:
	virtual void handleInput(Character* character, ConsoleKey key) override;
	virtual void update(Character* character) override;
};

class JumpingState : public ICharacterState {	
public:
	virtual void handleInput(Character* character, ConsoleKey key) override;
	virtual void update(Character* character) override;
};

class DuckingState : public ICharacterState {	
public:	
	virtual void handleInput(Character* character, ConsoleKey key) override;
	virtual void update(Character* character) override;
};