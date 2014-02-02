/* ***********************************************************************
    * Filename: trythis_error_reporting.cpp
    * Date: January 17, 11:36
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Try This - 5.5.3 Error reporting
    * Page: 144
    * Description: test many arguments for f()
   *********************************************************************** */

#include "std_lib_facilities.h"

// calculate area of a rectangle;
// return - 1 to indicate a bad argument
int area(int length , int width)
{
    //detect of an error is in a 
    //called function
    if (length <= 0 || width <= 0) return -1;
    return length * width;
}

int framed_area(int x, int y)
{
    return area(x-2, y-2);
}

int f(int x, int y, int z)
{
    //a handling of error is in the
    //calling function
    int area1 = area(x,y);
    if (area1 == -1) error("bad argument for area()");

    int area2 = framed_area(1,z);
    if (area2 == -1) error("bad argument for framed_area()");

    int area3 = framed_area(y,z);
    if (area3 == -1) error("bad argument for framed_area()");
    if (area3 == 0) error("area3 is equal 0");

    double ratio = double(area1)/area3;

    cout << "area1 == " << area1 << endl
        << "area2 == " << area2 << endl
        << "area3 == " << area3 << endl
        << "ratio == " << ratio << endl;
}

int main()
{
    f(10, 10, 10);
    f(20, 1, 0);
    f(-2, -3, -4);
    f(-1, -2, 30);
    f(5, 10, -12);
    f(1, -2, -23);
}
