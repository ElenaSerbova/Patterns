#pragma once
#include "pch.h"

class MenuItem
{
	string menuName;
public:
	MenuItem(string name) { menuName = name; }
	string getName() { return menuName; }

	virtual ~MenuItem() = 0 {};
	virtual void Execute() = 0;
	virtual void AddMenuItem(MenuItem* item) = 0;
	virtual void RemoveMenuItem(MenuItem* item) = 0;
	virtual MenuItem* GetChildMenuItem(int i) = 0;
};