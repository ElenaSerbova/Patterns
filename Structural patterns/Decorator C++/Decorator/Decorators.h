#pragma once
#include "pch.h"

class Artifact : public GameObject
{
protected:
	GameObject* innerObject;
public:
	Artifact(GameObject* object)
	{
		innerObject = object;
	}
	~Artifact() override {}
};


class Helmet : public Artifact
{
public:
	Helmet(GameObject* object) : Artifact(object) {}

	int getHealth() {
		return innerObject->getHealth() + 10;
	}

	int getStrength() {
		return innerObject->getStrength();
	}

	int getArmor() { 
		return innerObject->getArmor() + 30; 
	}
	int getSpeed() { 
		return innerObject->getSpeed() - 5; 
	}
};

class Shield : public Artifact
{
public:
	Shield(GameObject* object) : Artifact(object) {}

	int getHealth() {
		return innerObject->getHealth();
	}

	int getStrength() {
		return innerObject->getStrength();
	}

	int getArmor() {
		return innerObject->getArmor() + 60;
	}
	int getSpeed() {
		return innerObject->getSpeed() - 10;
	}
};
