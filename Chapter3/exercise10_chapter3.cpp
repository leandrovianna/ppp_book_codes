//exercise10_chapter3.cpp
//Date: Friday November 29th 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 10
//takes an operation followed by two operands and output the result

#include "simple_std_lib_facilities.h"

int main()
{
    string operation = "";
    double operand1 = 0.0, operand2 = 0.0;

    cout << "Type an operator followed by two numbers\n";
    cin >> operation >> operand1 >> operand2;

    if (operation == "+")
    {
        //plus operation
        cout << operand1 + operand2 << endl;
    }

    if (operation == "-")
    {
        //minus operation
        cout << operand1 - operand2 << endl;
    }

    if (operation == "*")
    {
        //multiply
        cout << operand1 * operand2 << endl;
    }

    if (operation == "/")
    {
        //divide
        cout << operand1 / operand2 << endl;
    }

    return 0;
}
