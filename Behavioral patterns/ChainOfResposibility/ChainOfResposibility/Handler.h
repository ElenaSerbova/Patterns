#pragma once

#include "Header.h"

class Handler : public IHandler
{
public:
	// Inherited via IHandler
	virtual void SetNext(IHandler* handler) override
	{
		if(handler != nullptr)
			_next = handler;
	}

	virtual void Handle(Request request) override 
	{
		if (_next != nullptr)
		{
			_next->Handle(request);
		}
	}

private:
	IHandler* _next = nullptr;
};

