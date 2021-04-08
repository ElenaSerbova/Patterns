#pragma once
class CharacterWithoutState {

	bool _isJumping = false;
	bool _isDucking = false;
public:
	void HandleInput(ConsoleKey key) {
		switch (key)
		{
		case ConsoleKey::B :
			if (!_isJumping && !_isDucking) {
				_isJumping = true;
				cout << "Character jumping" << endl;
			}			
			break;
		case ConsoleKey::ArrowDown :
			if (!_isJumping) {
				_isDucking = true;
				cout << "Character ducking" << endl;				
			}
			break;

		}
	}
};

