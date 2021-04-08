#pragma once

#include <iostream>
using namespace std;


class Singleton
{
	static Singleton* obj;

	Singleton() {}

public:

	static Singleton* GetObject() {
		if (obj == nullptr)
			obj = new Singleton;

		return obj;
	}

	void Print()
	{
		cout << "address: " << this << endl;
	}
};

Singleton* Singleton::obj = nullptr;

