#pragma once
class HouseBuilder
{
	House* house;
public:
	HouseBuilder();
	~HouseBuilder();

	void buildWall()
	{
		Wall* wall = new Wall();
		//init wall
		house->Add(wall);
	}

	void buildRoof()
	{
		Roof* roof = new Roof();
		//init roof
		house->Add(roof);
	}

	void buildWindow()
	{
		Window* window = new Window();
		house->Add(window);
	}

	void buildDoor()
	{
		Door* door = new Door();
		house->Add(door);
	}

	House* getHouse()
	{
		return house;
	}
};

