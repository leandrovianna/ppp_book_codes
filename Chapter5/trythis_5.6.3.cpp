/* ***********************************************************************
    * Filename: trythis_5.6.3.cpp
    * Date: January 21, 2014 - 12:10
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Try This - 5.6.3 Bad input
    * Page: 151
    * Description: uncaught exception
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    double d = 0;
    cout << "Enter a floating-point number: ";
    cin >> d;

    if (cin) {
        //OK
        cout << "A number: " << d << endl;
    } else {
    	//cin receiver a not-number
        error("You not insert a floating-point number");
        //thrown a exception without catching it
    }

    return 0;
}
