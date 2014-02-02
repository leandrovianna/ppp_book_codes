//example2_unsafe_conversions.cpp
//Stroustrup's Book - Chapter 3: Objects, Types and Values
//Example 2 - 3.9.2 Unsafe Conversions
//C++ conversions that can unsafe

#include "std_lib_facilities.h"

int main()
{
    double d = 0;

    while (cin >> d) { //repeat the statements below
                        //as long as we type in numbers
        int i = d; //try to squeeze a double into a int
        char c = i; //try to squeeze a int into a char
        int i2 = c; //try to squeeze a char into a int

        cout << "d==" << d      //the original double
            << " i==" << i      //converted to int
            << " i2==" << i2    //int value of char
            << " char(" << c << ")" << endl; //the char
    }
}
