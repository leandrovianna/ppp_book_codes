//exercise5_chapter3.cpp
//Date; Friday November 29th, 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types and Values
//Exercise 5
//Modify Exercise 4 to ask the user to enter two doubles

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Stroustrup's Programming Book - Exercise 5" << endl;
    cout << "Enter two floating-point numbers: ";
    double val1, val2;

    cin >> val1 >> val2;

    double smallest = val1;

    if (val1 < val2)
        smallest = val1;
    if (val2 < val1)
        smallest = val2;

    //write a smallest number
    cout << "Smallest: " << smallest << endl;

    double largest = val1;

    if (val2 > val1)
        largest = val2;

    //write a largest number
    cout << "Largest: " << largest << endl;

    //white sum and different
    double sum = val1 + val2;
    cout << "Sum: " << sum << endl;

    double different = val1 - val2;
    cout << "Different: " << different << endl;

    //write product of val1 and val2
    double product = val1 * val2;
    cout << "Product: " << product << endl;

    //ratio of val1 and val2
    double ratio_of = val1 / val2;
    cout << "Ratio of: " << ratio_of << endl;

    return 0;
}
