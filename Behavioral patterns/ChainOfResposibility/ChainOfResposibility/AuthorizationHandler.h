#pragma once

#include "Header.h"

class AuthorizationHandler : public Handler
{
public:
	virtual void Handle(Request request) override
	{
		if (!request.user.empty())
		{
			cout << "Authorization" << endl;
			Handler::Handle(request);
		}
		else
		{
			throw exception("User not authorized");
		}

	}
};

