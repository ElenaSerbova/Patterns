#pragma once

#include "Header.h"

class Remote
{
protected:
	TV* _tv;
public:
	Remote(TV* tv)
	{
		_tv = tv;
	}

	virtual void On() {
		_tv->On();
	}

	virtual void Off() {
		_tv->Off();
	}

	virtual void NextChanel() {
		int chanel = _tv->GetChanel();
		_tv->SetChanel(chanel + 1);
	}

	virtual void PrevChanel() {
		int chanel = _tv->GetChanel();
		_tv->SetChanel(chanel - 1);
	}
};

class RemoteEx : public Remote
{
public:
	RemoteEx(TV* tv) : Remote(tv){}

	void SetChanel(int num) {
		_tv->SetChanel(num);
	}
};

