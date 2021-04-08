#pragma once

#include "Header.h"

class NotifierDecorator : public INotifier
{
public:
	NotifierDecorator() = default;
	NotifierDecorator(INotifier* notifier)
	{
		_notifier = notifier;
	}

	virtual void Send(string message) override {

		if (_notifier != nullptr)
		{
			_notifier->Send(message);
		}
	}

	virtual ~NotifierDecorator()
	{
		if (_notifier != nullptr)
			delete _notifier;
	}

protected:
	INotifier* _notifier = nullptr;
};


class SmsDecorator : public NotifierDecorator
{
public:
	SmsDecorator() = default;	

	SmsDecorator(INotifier* notifier) : NotifierDecorator(notifier) { }

	void Send(string message) override
	{
		cout << "SMS: " << message << endl;

		NotifierDecorator::Send(message);
	}
};

class EmailDecorator : public NotifierDecorator
{
public:
	EmailDecorator() = default;
	EmailDecorator(INotifier* notifier) : NotifierDecorator(notifier){	}

	void Send(string message) override
	{
		cout << "Email: " << message << endl;
		NotifierDecorator::Send(message);
	}
};

class FacebookDecorator : public NotifierDecorator
{
public:
	FacebookDecorator() = default;	

	FacebookDecorator(INotifier* notifier) : NotifierDecorator(notifier){}

	void Send(string message) override
	{
		cout << "Facebook: " << message << endl;
		NotifierDecorator::Send(message);
	}
};

