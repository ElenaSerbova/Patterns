#pragma once
#include "pch.h"

class Command : public MenuItem
{
public:	
	Command(string name) : MenuItem(name) {}

	void Execute() override
	{
		cout << getName() << "-> operation" << endl;
	}

	void AddMenuItem(MenuItem* item) override
	{ 
		throw logic_error("not implemented operation"); 
	}
	
	void RemoveMenuItem(MenuItem* item) override
	{ 
		throw logic_error("not implemented operation"); 
	}
	
	MenuItem* GetChildMenuItem(int i) override
	{ 
		throw logic_error("not implemented operation"); 
	}
};
