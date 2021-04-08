#pragma once

#include "Header.h"

class TV
{
public:

	virtual void On() = 0;
	virtual void Off() = 0;
	virtual void SetChanel(int n) = 0;
	virtual int GetChanel() = 0;

	virtual ~TV() = 0 {}
};

class SamsungTv : public TV
{
	int currentChanel = 1;
public:

	virtual void On() {
		cout << "Samsung on" << endl;
	}

	virtual void Off() {
		cout << "Samsung on" << endl;
	}

	virtual void SetChanel(int n) {
		currentChanel = n;
		cout << "Samsung current chanel: " << currentChanel << endl;
	}

	virtual int GetChanel() {
		return currentChanel;
	}

};

class LgTv : public TV
{
	int currentChanel = 1;
public:

	virtual void On() {
		cout << "Lg on" << endl;
	}

	virtual void Off() {
		cout << "Lg on" << endl;
	}

	virtual void SetChanel(int n) {
		currentChanel = n;
		cout << "Lg current chanel: " << currentChanel << endl;
	}

	virtual int GetChanel() {
		return currentChanel;
	}

};
