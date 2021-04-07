#pragma once

#include "pch.h"

class SubMenu : public MenuItem
{
	vector<MenuItem*> items;
public:

	SubMenu(string name) : MenuItem(name) {}

	// Inherited via IMenuItem
	virtual void Execute() override;
	virtual void AddMenuItem(MenuItem* item) override;
	virtual void RemoveMenuItem(MenuItem* item) override;
	virtual MenuItem* GetChildMenuItem(int i) override;
};