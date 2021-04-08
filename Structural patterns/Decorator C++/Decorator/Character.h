#pragma once
#include "pch.h"

class Character : public GameObject
{
protected:
	int health;
	int strength;
	int armor;
	int speed;
public:
	Character();
	~Character();

	int getHealth() { return health; }
	int getStrength() { return strength; }
	int getArmor() { return armor; }
	int getSpeed() { return speed; }
};


class Human : public Character
{
public:
	Human()
	{
		health = 100;
		strength = 50;
		armor = 40;
		speed = 30;
	}
};

class Elf : public Character
{
public:
	Elf()
	{
		health = 150;
		strength = 70;
		armor = 30;
		speed = 100;
	}
};
