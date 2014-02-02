//example4_switch_technicaties.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.1.3 Switch Technicalities
//example of bad code (a break is missing)

#include "std_lib_facilities.h"

int main()
{
    const double cm_per_inch = 2.54; //number of centimeters in a inch
    double length = 1;               //length in inches or centimeters
    char unit = 0;
    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    switch (unit) {
        case 'i':
            cout << length << "in == " << cm_per_inch*length << "cm\n";
        case 'c':
            cout << length << "cm == " << length/cm_per_inch << "in\n";
    }
}
