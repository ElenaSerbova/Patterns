#pragma once

class Button
{
public:
	virtual void Print() = 0;
	virtual ~Button() = 0 {}
};

class Checkbox
{
public:
	virtual void Print() = 0;
	virtual ~Checkbox() = 0 {}
};

class GUIFactory
{
public:
	virtual Button* CreateButton() = 0;
	virtual Checkbox* CreateCheckbox() = 0;
	virtual ~GUIFactory() = 0 {}
};

