/* ***********************************************************************
    * Filename: exercise6_chapter4.cpp
    * Date: December 27, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 6
    * Description: converts digits in corresponding spelled-out values
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<string> spelled_numbers(10);
    spelled_numbers[0] = "zero";
    spelled_numbers[1] = "one";
    spelled_numbers[2] = "two";
    spelled_numbers[3] = "three";
    spelled_numbers[4] = "four";
    spelled_numbers[5] = "five";
    spelled_numbers[6] = "six";
    spelled_numbers[7] = "seven";
    spelled_numbers[8] = "eight";
    spelled_numbers[9] = "nine";

    /*cout << "Enter a integer value between 1 and 9\n";
    int number;
    while (cin >> number)
        if (number >= 0 && number <= 9)
            cout << spelled_numbers[number] << endl;
    */

    cout << "Enter a spelled-out number\n";
    string spell;
    while (cin >> spell)
        for (int n = 0; n <= 9; ++n)
            if (spelled_numbers[n] == spell)
                cout << n << endl;

    return 0;
}
