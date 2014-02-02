//exercise6_chapter3.cpp
//Date: Friday November 29, 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 6
//read three integers and output the values in numerical sequence separated by commas

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Exercise 6" << endl
        << "Enter three integers\n";

    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    int temp = 0;

    if (number2 < number1)
    {
        temp = number2;
        number2 = number1;
        number1 = temp; //temp is old number2
    }

    if (number3 < number1)
    {
        temp = number3;
        number3 = number1;
        number1 = temp; //temp is old number3
    }

    if (number3 < number2)
    {
        temp = number3;
        number3 = number2;
        number2 = temp; //temp is old number3
    }

    cout << number1 << ", "
        << number2 << ", "
        << number3 << endl;

    return 0;
}
