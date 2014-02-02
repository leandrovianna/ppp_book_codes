/* ***********************************************************************
    * Filename: example_non_errors.cpp
    * Date: January 16, 2014 - 10:40
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example - 5.3.3 Non-Errors
    * Page: 137
    * Description: examples of non-errors
   *********************************************************************** */

#include "std_lib_facilities.h"

int area(int lenght, int width) {return lenght*width;}

int main()
{
    int x4 = area(10, -7); //OK:but what is a rectangle with width minus 7
    int x5 = area(10.7, 9.3); //OK:but calls area(10,9)
    char x6 = area(100, 9999); //OK:but truncates the result
}
