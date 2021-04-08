#include "Header.h"

int main()
{
    ICalculator* calculator = new CalculatorProxy;

    double res = calculator->Sum(12, 23);
    res = calculator->Mult(2, 34);

    try {
        res = calculator->Div(23, 0);
    }
    catch (const logic_error & ex)
    {
        cout << ex.what() << endl;
    }
}

