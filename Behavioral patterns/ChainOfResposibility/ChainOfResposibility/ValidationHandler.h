#pragma once

#include "Header.h"

class ValidationHandler : public Handler
{
public:
	virtual void Handle(Request request) override
	{
		if (!request.data.empty())
		{
			cout << "Validation" << endl;

			Handler::Handle(request);
		}
		else
		{
			throw exception("Data is not valid");
		}
	}
}; 