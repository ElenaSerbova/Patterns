#include "pch.h"

void SubMenu::Execute()
{
	cout << getName() << ": " << endl;
	for (auto item : items)
	{
		cout << "\t";
		item->Execute();
	}
}

void SubMenu::AddMenuItem(MenuItem * item)
{
	items.push_back(item);
}

void SubMenu::RemoveMenuItem(MenuItem * item)
{
	remove(items.begin(), items.end(), item);
}

MenuItem * SubMenu::GetChildMenuItem(int i)
{
	return items[i];
}
