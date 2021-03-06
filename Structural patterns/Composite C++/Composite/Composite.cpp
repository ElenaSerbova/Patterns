#include "pch.h"

int main()
{
	MenuItem* menu = new SubMenu("File");
	menu->AddMenuItem(new Command("New"));
	menu->AddMenuItem(new Command("Open"));
	menu->AddMenuItem(new Command("Save"));
	
	auto settings = new SubMenu("Settings");
	menu->AddMenuItem(settings);

	settings->AddMenuItem(new Command("General"));
	settings->AddMenuItem(new Command("Display"));
	settings->AddMenuItem(new Command("Advanced"));


	menu->Execute();
}
