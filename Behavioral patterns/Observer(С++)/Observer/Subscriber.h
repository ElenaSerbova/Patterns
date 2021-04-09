#pragma once

#include "pch.h"

//interface
class ISubscriber
{
public:
	virtual ~ISubscriber() = 0 {};
	virtual void Update(EventArgs* args) = 0;
};

class Window1 : public ISubscriber
{
public:
	void Update(EventArgs* args)
	{
		WetherEventArgs* wargs = dynamic_cast<WetherEventArgs*>(args);

		cout << "Temperature: " << wargs->temperature << endl;
		cout << "Humidity: " << wargs->humidity << endl;
		cout << "Pressure: " << wargs->pressure << endl;
	}

};

class Window2 : public ISubscriber
{
public:
	void Update(EventArgs* args)
	{
		WetherEventArgs* wargs = dynamic_cast<WetherEventArgs*>(args);

		cout << "Temperature\tHumidity\tPressure"<< endl; 
		cout << wargs->temperature << "\t\t"
			<< wargs->humidity << "\t\t"
		    << wargs->pressure << endl;
	}
};