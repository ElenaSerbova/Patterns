#pragma once
class GameObject
{
public:
	virtual ~GameObject() = 0 {};
	virtual int getHealth() = 0;
	virtual int getStrength() = 0;
	virtual int getArmor() = 0;
	virtual int getSpeed() = 0;
};

