// Builder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	Director director;
	House* house = director.makeSimpleHouse();
	house->Print();
}
