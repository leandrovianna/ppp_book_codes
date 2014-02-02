/* ***********************************************************************
    * Filename: exercise8_chapter4.cpp
    * Date: December 27, 2013 - 17:45
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 8 (Page 126)
    * Description: Legend of inventor of chess game
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    int square_grains = 1; //grains of rice in the current square
    int total_grains = 0; //grains in the total

    bool arrive_one_thousand = false;
    bool arrive_one_million = false;
    bool arrive_one_billion = false;

    for (int square = 1; square <= 64; ++square)
    {
        cout << "\n\nSquare: " << square
             << "\nGrains in current square: " << square_grains
             << "\nGrains in the total: " << total_grains << endl;

        if (total_grains >= 1000 && arrive_one_thousand == false)
        {
            cout << "They are " << square << " squares to give the inventor 1,000 at least grains of rice!\n";
            arrive_one_thousand = true;
        }

        if (total_grains >= 1000000 && arrive_one_million == false)
        {
            cout << "They are " << square << " squares to give the inventor 1,000,000 at least grains of rice!\n";
            arrive_one_million = true;
        }

        if (total_grains >= 1000000000 && arrive_one_billion == false)
        {
            cout << "They are " << square << " squares to give the inventor at least 1,000,000,000 grains of rice!\n";
            arrive_one_billion = true;
        }

        square_grains *= 2;
        total_grains += square_grains;
    }

    return 0;
}
