//example1_if_statements.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.1.1 if-statements
//example about if-statement

#include "std_lib_facilities.h"

int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter two integers\n";
    cin >> a >> b;

    if (a < b)  //condition
        // 1st alternative (taken if condition is true)
        cout << "max(" << a << "," << b << ") is " << b << "\n";
    else
        // 2nd alternative (taken if condition is false)
        cout << "max(" << a << "," << b << ") is " << a << "\n";
}
