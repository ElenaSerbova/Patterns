#pragma once
#include "Header.h"

class CalculatorProxy : public ICalculator
{
public:

	CalculatorProxy()
	{
		_path = "calculator_log.txt";
		_stream.open(_path);	
		_calculator = new Calculator;
	}

	~CalculatorProxy()
	{
		if(_stream.is_open())
			_stream.close();

		delete _calculator;
	}

	// Inherited via ICalculator
	virtual double Sum(double num1, double num2) override;
	virtual double Sub(double num1, double num2) override;
	virtual double Mult(double num1, double num2) override;
	virtual double Div(double num1, double num2) override;

private:
	string _path;
	ofstream _stream;
	ICalculator* _calculator;
};

