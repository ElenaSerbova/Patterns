#pragma once

#include "Header.h"

namespace MacGUI
{

	class MacButton : public Button
	{
	public:
		void Print() override
		{
			cout << "Mac button" << endl;
		}
	};

	class MacCheckbox : public Checkbox
	{
	public:
		void Print() override
		{
			cout << "Mac checkbox" << endl;
		}
	};

	class MacFactory : public GUIFactory
	{
	public:
		Button* CreateButton() override
		{
			return new MacButton;
		}

		Checkbox* CreateCheckbox() override
		{
			return new MacCheckbox;
		}
	};

}
