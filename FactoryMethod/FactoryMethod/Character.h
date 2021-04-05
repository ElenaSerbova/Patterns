#pragma once

class Character
{
public:
	virtual int GetHealth() = 0;
	virtual int GetArmor() = 0;
	virtual void Print() = 0;

	virtual ~Character() = 0 {}
};


class Human : public Character
{
	// Inherited via Character
	virtual int GetHealth() override;
	virtual int GetArmor() override;
	virtual void Print() override;
};

class Elf : public Character
{
	// Inherited via Character
	virtual int GetHealth() override;
	virtual int GetArmor() override;
	virtual void Print() override;
};
