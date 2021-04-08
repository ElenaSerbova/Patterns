#include "Header.h"

double CalculatorProxy::Sum(double num1, double num2)
{
	double res = _calculator->Sum(num1, num2);
	_stream << "Sum(" << num1 << ", " << num2 << ") = " << res << endl;
	cout<< "Sum(" << num1 << ", " << num2 << ") = " << res << endl;
	return res;
}

double CalculatorProxy::Sub(double num1, double num2)
{
	double res = _calculator->Sub(num1, num2);
	_stream << "Sub(" << num1 << ", " << num2 << ") = " << res << endl;
	cout << "Sub(" << num1 << ", " << num2 << ") = " << res << endl;
	return res;
}

double CalculatorProxy::Mult(double num1, double num2)
{
	double res = _calculator->Mult(num1, num2);
	_stream << "Mult(" << num1 << ", " << num2 << ") = " << res << endl;
	cout << "Mult(" << num1 << ", " << num2 << ") = " << res << endl;
	return res;
}

double CalculatorProxy::Div(double num1, double num2)
{
	try
	{
		double res = _calculator->Div(num1, num2);
		_stream << "Div(" << num1 << ", " << num2 << ") = " << res << endl;
		cout << "Div(" << num1 << ", " << num2 << ") = " << res << endl;
		return res;

	}
	catch (const logic_error& ex)
	{
		_stream << "Div(" << num1 << ", " << num2 << ") :  "<<  ex.what() << endl;
		cout << "Div(" << num1 << ", " << num2 << ") :  " << ex.what() << endl;
		throw;
	}
}
