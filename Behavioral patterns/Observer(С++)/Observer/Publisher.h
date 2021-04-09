#pragma once
#include "pch.h"

class Publisher
{
	vector<ISubscriber*> subscribers;
public:	
	virtual ~Publisher();

	void AddSubscriber(ISubscriber* newSubscriber)
	{
		subscribers.push_back(newSubscriber);
	}

	void RemoveSubscriber(ISubscriber* newSubscriber)
	{
		remove(subscribers.begin(), subscribers.end(), newSubscriber);
	}

	void Notify(float temperature, float humidity, float pressure)
	{
		for (auto subscriber : subscribers)
		{
			WetherEventArgs* args = new WetherEventArgs;
			args->eventName = "weatherChanged";
			args->temperature = temperature;
			args->humidity = humidity;
			args->pressure = pressure;

			subscriber->Update(args);
		}		
	}
};

