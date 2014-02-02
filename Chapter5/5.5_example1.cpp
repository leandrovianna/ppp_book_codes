/* ***********************************************************************
    * Filename: example_run_time_errors.cpp
    * Date: January 16, 2014 - 11:26
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example - 5.5 Run-time errors
    * Page: 139
    * Description: example of run-time error
   *********************************************************************** */

#include "std_lib_facilities.h"

int area(int lenght, int width)
{
    return lenght*width;
}

int flamed_area(int x, int y)
{
    return area(x-2, y-2);
}

int main()
{
    int x = -1;
    int y = 2;
    int z = 4;
    // ...
    int area1 = area(x,y);
    int area2 = flamed_area(1,z);
    int area3 = flamed_area(y,z);
    double ratio = double(area1)/area3; //convert to double to get
                                        //floating-point division
}
