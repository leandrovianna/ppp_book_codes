//exercise2_chapter3.cpp
//Date: Wednesday, November 27th, 2013
//Stroustrup's Book - Chapter 3: Objects, Types, and Values
//Exercise 2
//Convert from miles to kilometers

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Exercise 2: Convert from miles to kilometers." << endl;
    cout << "Enter a number of miles: ";
    double miles; //number of miles
    cin >> miles;

    double kilometers;

    kilometers = miles * 1.609; //a mile have a 1.609 kilometers

    cout << miles << " miles is " << kilometers << " kilometers.\n";

    return 0;
}
