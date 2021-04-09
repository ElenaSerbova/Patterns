#include "pch.h"
#include <iostream>

int main()
{
	srand(time(0));

	Window1* window1 = new Window1();
	Window2* window2 = new Window2();

	WeatherData weather;
	weather.AddSubscriber(window1);
	weather.AddSubscriber(window2);


	while (true)
	{
		weather.measurementsChanged();
		system("pause");
		system("cls");
	}
}

