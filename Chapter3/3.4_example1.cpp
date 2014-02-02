//example_operations_and_operations.cpp
//Stroustrup's Book - Chapter 3
//Example 1 - 3.4 Operations and Operators
//simple program to exercise operators

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of == " << sqrt(n);
        << endl; //another name for new line ("end of line")

    return 0;
}
