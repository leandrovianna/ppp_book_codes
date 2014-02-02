//exercice4_chapter4.cpp
//Date: Wednesday November 27th, 2013
//Stroustrup's Book - Chapter 3: Objects, Types, and Values
//Exercise 4
//to read two integers and do operations with them

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Stroustrup's Programming Book - Exercise 4" << endl;
    cout << "Enter two integer numbers: ";
    int val1, val2;

    cin >> val1 >> val2;

    int smallest = val1;

    if (val1 < val2)
        smallest = val1;
    if (val2 < val1)
        smallest = val2;

    //write a smallest number
    cout << "Smallest: " << smallest << endl;

    int largest = val1;

    if (val2 > val1)
        largest = val2;

    //write a largest number
    cout << "Largest: " << largest << endl;

    //white sum and different
    int sum = val1 + val2;
    cout << "Sum: " << sum << endl;

    int different = val1 - val2;
    cout << "Different: " << different << endl;

    //write product of val1 and val2
    int product = val1 * val2;
    cout << "Product: " << product << endl;

    //ratio of val1 and val2
    int ratio_of = val1 / val2;
    cout << "Ratio of: " << ratio_of << endl;

    return 0;
}
