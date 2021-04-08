#pragma once
#include "Header.h"

class INotifier
{
public:
	virtual ~INotifier() = 0 {};
	virtual void Send(string message) = 0;
};

