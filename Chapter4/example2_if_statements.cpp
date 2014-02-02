//example2_if_statements.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 2 - 4.4.1.1 if-statements
//convert from inches to centimeters or centimeters to inches
//a suffix 'i' or 'c' indicates the unit of the input

#include "std_lib_facilities.h"

int main()
{
    const double cm_per_inch = 2.54; //number of centimeters in a inch
    double length = 1;                  //length in inches or centimeters
    char unit = 0;

    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    if (unit == 'i')
        cout << length << "in == " << cm_per_inch*length << "cm\n";
    else
        cout << length << "cm == " << length/cm_per_inch << "in\n";

    return 0;
}

