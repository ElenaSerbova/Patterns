#include "pch.h"

void OnGroundState::handleInput(Character * character, ConsoleKey key) {

	if (key == ConsoleKey::ArrowUp) {
		character->setState(new JumpingState());
	}
	else if (key == ConsoleKey::ArrowDown) {
		character->setState(new DuckingState());
	}
}

void OnGroundState::update(Character * character) {
	cout << "character on ground" << endl;
}

void DuckingState::handleInput(Character * character, ConsoleKey key) {

	if (key == ConsoleKey::ArrowUp) {
		character->setState(new OnGroundState());
	}
}

void DuckingState::update(Character * character) {
	cout << "character ducking" << endl;
}

void JumpingState::handleInput(Character * character, ConsoleKey key) {

	if (key == ConsoleKey::ArrowDown) {
		character->setState(new OnGroundState());
	}
}

void JumpingState::update(Character * character) {
	cout << "character jumping" << endl;
}
