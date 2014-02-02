/* ***********************************************************************
    * Filename: example_link_time_errors.cpp
    * Date: January 16, 2014 - 11:04
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example - 5.4 Link-time Errors
    * Page: 138
    * Description: typical link-time error
   *********************************************************************** */

//#include "../Outros/area.h"
#include "std_lib_facilities.h"

int area(int lenght, int width); //calculates area of a rectangle

int main()
{
    int x = area(2,3); //Link-time error: function area() don't have a definition
    //How to fix?
    //include a header file with the defition of function area()
}
