/* *************************************************************************
    * Filename: trythis_why_bother_with_functions.cpp
    * Date: December 23, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Try This - 4.5.1 Why Bother with Functions?
    * Description: Implements the square() without using the multiplication
    operator (*); that is, do the x*x by repeated addition. Then run some
    version of "the first program" using this square().
   ************************************************************************* */

#include "std_lib_facilities.h"

int square (int x)
{
    int result = 0; //square of x

    for (int i = 0; i < x; ++i) { //repeat x times
        result += x; //add x to result x times
    }

    return result;
}

int main()
{
    for (int i = 0; i < 100; ++i) {
        cout << i << "\t" << square(i) << "\n";
    }
}
