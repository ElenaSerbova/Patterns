#pragma once
class WeatherData : public Publisher
{
public:
	float getTemperature() { return rand() % 81 - 40; }
	float getHumidity() { return rand() % 101; }
	float getPressure() { return rand() % 41 + 745; }

	void measurementsChanged()
	{
		float t = getTemperature();
		float h = getHumidity();
		float p = getPressure();

		Notify(t, h, p);
	}	
};

