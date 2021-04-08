#pragma once
#include "Headers.h"

class SuperHero
{
	string _name;
	IFly* _flyBehavior = nullptr;

public:

	SuperHero(IFly* flyBehavior, string name)
	{
		_name = name;
		_flyBehavior = flyBehavior;
	}

	void SetFlyBehavior(IFly* flyBehavior)
	{
		delete _flyBehavior;
		_flyBehavior = flyBehavior;
	}

	IFly* GetFlyBehavior()
	{
		return _flyBehavior;
	}

	virtual void Fly()
	{
		cout << _name << ": ";
		_flyBehavior->Fly();
	}
};

class IronMan : public SuperHero
{
public:

	IronMan() : SuperHero(new SupersonicFly(), "IronMan") { }
};

class Tor : public SuperHero
{
public:
	Tor() : SuperHero(new NoFly(), "Tor") { }
};



