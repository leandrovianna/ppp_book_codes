/* ***********************************************************************
    * Filename: exercise20_chapter4.cpp
    * Date: January 01, 2014 - 10:13
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 20
    * Page: 128
    * Description: read a pair (name and value)
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

    string name;
    bool found = false;

    cout << "Type a name to find: ";
    while (cin >> name)
    {
        found = false;

        for (unsigned int i = 0; i < names.size(); ++i)
        {
            if (name == names[i])
            {
                found = true;
                cout << name << '\t' << scores[i] << endl;
                break;
            }
        }

        if (found == false)
            cout << "name not found!\n";
    }

    return 0;
}
