/* ***********************************************************************
    * Filename: exercise9_chapter4.cpp
    * Date: December 28, 2013 - 15:21
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 9
    * Page: 127
    * Description: Try to calculate the number of rice grains.
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    double square_grains = 1; //grains of rice in the current square
    double total_grains = 0; //grains in the total

    for (int square = 1; square <= 64; ++square)
    {
        cout << "\n\nSquare: " << square
             << "\nGrains in current square: " << square_grains
             << "\nGrains in the total: " << total_grains << endl;

        square_grains *= 2;
        total_grains += square_grains;
    }

    //Largest number of squares for which can calculate exactly
    //number of grains (using int)? It is 31 squares.
    //Largest number of squares for which can calculate approximate
    //number of grains (using double)? It is 64 squares.
    return 0;

}
