/* ***********************************************************************
    * Filename: exercise19_chapter4.cpp
    * Date: January 01, 2014 - 01:21
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 19
    * Page: 128
    * Description: read a pair (name and value)
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<string> names;
    vector<int> scores;

    string name;
    int score;

    //Input
    cout << "Enter name and score of anybody\n";
    while (cin >> name >> score) {
        names.push_back (name);
        scores.push_back (score);
    }

    //Computation
    bool error = false;

    //Verifying name duplication
    for (int i = 0; i < names.size(); ++i) {
        for (int j = i+1; j < names.size(); ++j) {
            if (names[i] == names[j]) {
                cout << "ERROR: " << names[i] << " is duplicate!\n";
                error = true;
                break;
            }
        }
    }

    //Output
    if (error == false) {
        for (int i = 0; i < names.size(); ++i)
            cout << names[i] << '\t'
                << scores[i] << endl;
    }

    return 0;
}
