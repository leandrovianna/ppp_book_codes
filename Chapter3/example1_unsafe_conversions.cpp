//example_unsafe_conversions.cpp
//Stroustrup's Book - Chapter 3: Objects, Types and Values
//Example 1 - 3.9.2 Unsafe Conversions
//C++ conversions that can unsafe

#include "std_lib_facilities.h"

int main()
{
    int a = 20000;
    char c = a; //try to squeeze a large int to a small char
    int b = c;

    if (a != b) // != means "not equal"
        cout << "oops!: " << a << "!=" << b << endl;
    else
        cout << "Wow! We have large characters\n";
}
