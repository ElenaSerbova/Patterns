#pragma once

#include "Header.h"

class Calculator : public ICalculator
{
public:
	// Inherited via ICalculator
	virtual double Sum(double num1, double num2) override;
	virtual double Sub(double num1, double num2) override;
	virtual double Mult(double num1, double num2) override;
	virtual double Div(double num1, double num2) override;
};

