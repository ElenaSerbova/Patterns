// Decorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


int main()
{
	GameObject* character = new Human();
	character = new Helmet(character);
	character = new Shield(character);

	cout << "Health: " << character->getHealth() << endl;
	cout << "Strength: " << character->getStrength() << endl;
	cout << "Armor: " << character->getArmor() << endl;
	cout << "Speed: " << character->getSpeed() << endl;





}
