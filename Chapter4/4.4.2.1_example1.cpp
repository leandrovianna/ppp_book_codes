//example1_while_statements.cpp
//Date: December 20, 2013
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.2.1 while-statements
//calculate and print a table of squares 0-99

#include "std_lib_facilities.h"

int main()
{
    int i = 0; //start from 0
    while (i < 100) {
        cout << i << "\t" << square(i) << '\n';
        ++i; //increment i (that is, i become i+1)
    }
}
