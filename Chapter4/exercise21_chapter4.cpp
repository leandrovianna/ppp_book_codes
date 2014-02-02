/* ***********************************************************************
    * Filename: exercise21_chapter4.cpp
    * Date: January 01, 2014 - 10:36
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 21
    * Page: 128
    * Description: modified exercise 19, to find names by score
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<string> names;
    names.push_back("Joe");
    names.push_back("Barbara");
    names.push_back("Gary");
    vector<int> scores;
    scores.push_back(17);
    scores.push_back(20);
    scores.push_back(10);

    int score;
    bool found = false;

    cout << "Type a score to find: ";
    while (cin >> score)
    {
        found = false;

        for (unsigned int i = 0; i < scores.size(); ++i)
        {
            if (score == scores[i])
            {
                found = true;
                cout << names[i] << '\t' << scores[i] << endl;
            }
        }

        if (found == false)
            cout << "score not found!\n";
    }

    return 0;
}
