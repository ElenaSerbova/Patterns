#pragma once

#include "Header.h"

class IHandler
{
public:
	virtual ~IHandler() = 0 {};
	virtual void SetNext(IHandler* handler) = 0;
	virtual void Handle(Request request) = 0;
};

