/* ***********************************************************************
    * Filename: example1_narrowing_error.cpp
    * Date: January 21, 2014 -15:27
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 1 - 5.6.4 Narrowing errors
    * Page: 151
    * Description: a function to verifying a cast (narrow_cast<type>())
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
	int x1 = narrow_cast<int>(2.9); //throw
	int x2 = narrow_cast<int>(2.0); //OK
	char c1 = narrow_cast<char>(1066); //throw
	char c2 = narrow_cast<char>(85); //OK
}
