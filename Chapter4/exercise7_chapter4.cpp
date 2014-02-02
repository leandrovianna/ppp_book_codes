/* ***********************************************************************
    * Filename: exercise7_chapter4.cpp
    * Date: December 27, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 7
    * Description: Simple Calculator modified (read spelled-out numbers)
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two spelled-out numbers and a operator" << endl;

    string spell1, spell2;
    double number1 = 0, number2 = 0;
    char oper;

    vector<string> spelled_numbers(10);
    spelled_numbers[0] = "zero";
    spelled_numbers[1] = "one";
    spelled_numbers[2] = "two";
    spelled_numbers[3] = "three";
    spelled_numbers[4] = "four";
    spelled_numbers[5] = "five";
    spelled_numbers[6] = "six";
    spelled_numbers[7] = "seven";
    spelled_numbers[8] = "eight";
    spelled_numbers[9] = "nine";

    cin >> spell1 >> spell2 >> oper;

    for (int n = 0; n <= 9; ++n)
    {
        if (spelled_numbers[n] == spell1)
            number1 = n;
        if (spelled_numbers[n] == spell2)
            number2 = n;
    }

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
