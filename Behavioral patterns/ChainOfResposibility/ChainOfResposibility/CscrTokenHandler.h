#pragma once

#include "Header.h"

class CscrTokenHandler : public Handler
{
public:
	virtual void Handle(Request request) override
	{
		if (!request.csrfToken.empty())
		{
			cout << "Csrf token" << endl;
			Handler::Handle(request);
		}
		else
		{
			throw exception("csrf token is empty");
		}
	}
};