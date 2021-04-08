#pragma once
class House
{
	vector<Component*> components;
public:
	House();
	~House();

	void Add(Component* component)
	{
		components.push_back(component);
	}

	void Print()
	{
		for (auto c : components) 
		{
			c->Print();
		}
	}
};

