// Flightweight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(0));

	TreeModel* model = new TreeModel;
	
	vector<Tree*> forest;

	for (size_t i = 0; i < 10; i++)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		int h = rand() % 100;
		forest.push_back(new Tree(model, x, y, h));
		forest[i]->Draw();
		cout << endl;;
	}

}

