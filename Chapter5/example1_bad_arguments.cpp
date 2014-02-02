/* ***********************************************************************
    * Filename: example1_bad_arguments.cpp
    * Date: January 19, 2014 - 12:51
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 1 - 5.6.1 Bad arguments
    * Page: 145
    * Description: Using a exception in C++
   *********************************************************************** */

#include "std_lib_facilities.h"

class Bad_area { }; //a type specifically for reporting errors from area()

//calculate area of a rectangle;
//throw a Bad_area exception in case of bad argument
int area (int lenght, int width)
{
	if (lenght <= 0 || width <= 0) throw Bad_area(); //throw a exception
	return lenght*width;
}

/* ------------------------------------------------------------------------------ */
//Second part of example.

int main()
{
	try {
		int x = -1;
		int y = 2;
		int z = 4;
		// ...
		int area1 = area(x,y);
		int area2 = framed_area(1,z);
		int area3 = framed_area(y,z);
		double ratio = area1/area3;
	}
	catch (Bad_area) {
		cout << "Oops! bad arguments to area()\n";
	}
	return 0;
}