#pragma once
#include "Headers.h"

class IFly
{
public:
	virtual void Fly() = 0;
	virtual ~IFly() = 0 {};
};

class SimpleFly : public  IFly
{
public:
	virtual void Fly() override
	{
		cout << "Simple fly" << endl;
	}
};

class SupersonicFly : public  IFly
{
public:
	virtual void Fly() override
	{
		cout << "Supersonic fly" << endl;
	}
};

class NoFly : public IFly
{
public:
	virtual void Fly() override
	{	
		cout << "no fly" << endl;
	}
};

