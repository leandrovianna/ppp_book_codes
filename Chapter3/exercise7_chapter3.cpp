//exercise7_chapter3.cpp
//Date: Friday November 29, 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 7
//same Exercise 6, but user enter three strings

#include "simple_std_lib_facilities.h"

int main()
{
    cout << "Exercise 7" << endl
        << "Please, enter three words\n";

    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    string temp = "";

    if (word2 < word1)
    {
        temp = word2;
        word2 = word1;
        word1 = temp; //temp is old word2
    }

    if (word3 < word1)
    {
        temp = word3;
        word3 = word1;
        word1 = temp; //temp is old word3
    }

    if (word3 < word2)
    {
        temp = word3;
        word3 = word2;
        word2 = temp; //temp is old word3
    }

    cout << word1 << ", "
        << word2 << ", "
        << word3 << endl;

    return 0;
}
