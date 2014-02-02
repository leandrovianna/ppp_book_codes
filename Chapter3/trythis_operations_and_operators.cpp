//trythis_operations_and_operations.cpp
//Stroustrup - Try This - 3.4 Operations and Operators
//same program (§3.4 - Example 1) but the operations are done in a int

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;

    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree time n == " << n*3
        << "\ntwice n == " << n+n
        << "\nn square == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << endl; //another name for newline ("end of file")

    return 0;
}
