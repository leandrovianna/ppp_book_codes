/* ***********************************************************************
    * Filename: trythis_type_errors.cpp
    * Date: January 16, 2014 - 10:25
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Try This - 5.3.2 Type Errors
    * Page: 136
    * Description: try examples of type errors to see the messages of compiler
   *********************************************************************** */

#include "std_lib_facilities.h"

int area(int lenght, int width);

int main()
{
    int x0 = arena(7);
    int x1 = area(7);
    int x2 = area("seven", 2);
}
