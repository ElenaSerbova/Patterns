#pragma once
class Director
{
	HouseBuilder* builder;
public:
	Director();
	~Director();

	void setBuilder(HouseBuilder* newBuilder)
	{
		builder = newBuilder;
	}

	House* makeSimpleHouse()
	{		
		builder->buildWall();
		builder->buildWall();
		builder->buildWall();
		builder->buildWall();
		builder->buildRoof();
		builder->buildDoor();
		builder->buildWindow();

		return builder->getHouse();
	}
};

