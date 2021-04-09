#pragma once

#include "pch.h"

class EventArgs
{
public:
	string eventName;

	virtual ~EventArgs(){}
};

class WetherEventArgs : public EventArgs {
public:
	float temperature;
	float humidity;
	float pressure;
};

