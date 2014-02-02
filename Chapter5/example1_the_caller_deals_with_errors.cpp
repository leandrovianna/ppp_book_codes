/* ***********************************************************************
    * Filename: example_the_caller_deals_with_errors.cpp
    * Date: January 16, 2014 - 17:17
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example - 5.5.1 The caller deals with errors
    * Page: 140
    * Description: example of deal with a run-time error
   *********************************************************************** */

#include "std_lib_facilities.h"

int area(int lenght, int width)
{
    return lenght*width;
}

const int frame_width = 2;
int framed_area(int x, int y) //calculate area within frame
{
    return area(x-frame_width, y-frame_width);
}

int main()
{
    int x = -1;
    int y = 2;
    int z = 4;

    // deal with errors
    if (x <= 0 || y <= 0) error("non-positive area() argument"); // || means "or"
    int area1 = area(x,y);

    if (1-frame_width <= 0 || z-frame_width <= 0)
        error("non-positive argument for area() called by framed_area()");
    int area2 = framed_area(1,z);

    if (y-frame_width <= 0 || z-frame_width <= 0)
        error("non-positive area() argument called by framed_area()");
    int area3 = framed_area(y,z);

    double ratio = double(area1)/area3; //convert to double to get
                                        //floating-point division
}
