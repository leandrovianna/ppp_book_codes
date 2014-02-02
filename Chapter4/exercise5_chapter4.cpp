/* ***********************************************************************
    * Filename: exercise5_chapter4.cpp
    * Date: December 26, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 5
    * Description: Simple Calculator
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two numbers and a operator" << endl;

    double number1, number2;
    char oper;

    cin >> number1 >> number2 >> oper;

    switch (oper)
    {
        case '+':
            cout << "The sum of " << number1
                << " and " << number2 << " is "
                << number1 + number2 << ".\n";
            break;
        case '-':
            cout << "The subtract of " << number1
                << " and " << number2 << " is "
                << number1 - number2 << ".\n";
            break;
        case '*':
            cout << "The multiply of " << number1
                << " and " << number2 << " is "
                << number1 * number2 << ".\n";
            break;
        case '/':
            cout << "The divide of " << number1
                << " and " << number2 << " is "
                << number1 / number2 << ".\n";
            break;
        default:
            cout << "The operator isn't correct!\n";
            break;
    }

    return 0;
}
