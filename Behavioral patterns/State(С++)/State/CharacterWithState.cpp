#include "pch.h"

Character::Character() {
	state = new OnGroundState();
}

 ICharacterState * Character::getState() {
	return state;
}

void Character::setState(ICharacterState * newState) {
	state = newState;
}

void Character::handleInput(ConsoleKey key) {
	state->handleInput(this, key);
}

void Character::update() {
	state->update(this);
}
