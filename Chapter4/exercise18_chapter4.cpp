/* ***********************************************************************
    * Filename: exercise18_chapter4.cpp
    * Date: January 01, 2014 - 00:45
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 18
    * Page: 128
    * Description: to solve quadratic equations
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    cout << "Quadratic Equations\n";
    cout << "Enter a, b and c, respectively\n";

    double a, b, c, x1, x2;
    cin >> a >> b >> c;

    cout << a << "x² + " << b << "x + " << c << " = 0\n";

    if (a == 0)
    {
        cout << "a == 0\n"
             << "ERROR: It is not a quadratic equation!\n";
    }
    else
    {
        //It is a quadratic equation
        //Using Bascara Formula
        double delta = b * b - 4 * a * c; //b² - 4ac

        cout << "delta == " << delta << endl;

        if (delta < 0)
        {
            //No solutions
            cout << "Delta is negative! No real solution!\n";
        }
        else if (delta > 0)
        {
            //Two solutions
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            cout << "Two real roots!" << endl
                 << "x1 == " << x1 << endl
                 << "x2 == " << x2 << endl;
        }
        else if (delta == 0)
        {
            //One solution
            x1 = (-b) / (2 * a);
            cout << "One real root!" << endl
                 << "x1 == " << x1 << endl;
        }
    }

    return 0;
}
