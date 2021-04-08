#pragma once


class ICalculator
{
public:
	virtual ~ICalculator() = 0 {};
	virtual double Sum(double num1, double num2) = 0;
	virtual double Sub(double num1, double num2) = 0;
	virtual double Mult(double num1, double num2) = 0;
	virtual double Div(double num1, double num2) = 0;
};

