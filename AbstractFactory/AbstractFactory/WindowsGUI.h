#pragma once

#include "Header.h"

namespace WindowsGUI
{

	class WindowsButton : public Button
	{
	public:
		void Print() override
		{
			cout << "Windows button" << endl;
		}
	};


	class WindowsCheckbox : public Checkbox
	{
	public:
		void Print() override
		{
			cout << "Windows checkbox" << endl;
		}
	};

	class WindowsFactory : public GUIFactory
	{
	public:
		Button* CreateButton() override
		{
			return new WindowsButton;
		}

		Checkbox* CreateCheckbox() override
		{
			return new WindowsCheckbox;
		}
	};
}