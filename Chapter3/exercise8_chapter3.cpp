//exercise8_chapter3.cpp
//Date: Friday November 29, 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 8
//test an integer value to determine if it is a odd or even

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Exercise 8" << endl;
    cout << "Please enter an integer\n";

    int value;
    cin >> value;

    if (value % 2 == 0)
        cout << "The value " << value << " is an even number." << endl;
    if (value % 2 == 1)
        cout << "The value " << value << " is an odd number." << endl;

    return 0;
}
