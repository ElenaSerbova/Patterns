#include "Header.h"

int Human::GetHealth()
{
	return 80;
}

int Human::GetArmor()
{
	return 60;
}

void Human::Print()
{
	cout << "Human health: " << GetHealth() << " armor: " << GetArmor() << endl;
}

int Elf::GetHealth()
{
	return 100;
}

int Elf::GetArmor()
{
	return 60;
}

void Elf::Print()
{
	cout << "Elf health: " << GetHealth() << " armor: " << GetArmor() << endl;
}
