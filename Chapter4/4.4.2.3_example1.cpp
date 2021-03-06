//example1_for_statements.cpp
//Date: December 20, 2013
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.2.3 for-statements
//calculate and print a table of square 0-99

#include "std_lib_facilities.h"

int square(int x) 
{
	return x*x;
}

int main()
{
    for (int i = 0; i < 100; ++i) {
        cout << i << "\t" << square(i) << '\n';
    }
}
