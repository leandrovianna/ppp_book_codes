/* ***********************************************************************
    * Filename: example2_the_callee_deals_with_errors.cpp
    * Date: January 16, 2014 - 19:40
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example - 5.5.2 The callee deals with errors
    * Page: 142
    * Description: example of deal with a run-time error
   *********************************************************************** */

#include "std_lib_facilities.h"

int area(int lenght, int width) //calculate area of a rectangle
{
    if (lenght <= 0 || width <= 0) error("non-positive area() argument");
    return lenght*width;
}

int framed_area(int x, int y) //calculate area within frame
{
    const int frame_width = 2;
    return area(x-frame_width, y-frame_width);
}

int main()
{
    int x = -1;
    int y = 2;
    int z = 4;

    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3; //convert to double to get
                                        //floating-point division
}
