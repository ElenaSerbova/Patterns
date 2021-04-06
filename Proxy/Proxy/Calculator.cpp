#include "Header.h"

double Calculator::Sum(double num1, double num2)
{
	return num1 + num2;
}

double Calculator::Sub(double num1, double num2)
{
	return num1 - num2;
}

double Calculator::Mult(double num1, double num2)
{
	return num1 * num2;
}

double Calculator::Div(double num1, double num2)
{
	if (num2 == 0)
		throw logic_error("Divide by zero exception");
	return num1 / num2;
}
