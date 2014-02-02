/* ***********************************************************************
    * Filename: exercise4_chapter4.cpp
    * Date: December 26, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 4
    * Description: Numbers Guessing Game
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    //Incomplete
    cout << "Think of a number between 1 and 100." << endl;
    char answer;

    int max = 100,
        min = 1;

    //number = ((max - min) / 2) + min;
    max /= 2;

    cout << "Is the number you are thinking less than " << max << "?\n(y/n): ";
    cin >> answer;

    if (answer == 'y')
        max = (min+max) / 2;
    else if (answer == 'n')
        min = (min+max) / 2;

    if (min == max)
        cout << "Your number is " << max << endl;

    cout << "DEBUG:\nmax == " << max << "\nmin == " << min << endl;
}
