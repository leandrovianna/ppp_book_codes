//exercise9_chapter3.cpp
//Date: Friday November 29th 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 9
//converts spelled-out numbers

#include "simple_std_lib_facilities.h"

int main()
{
    string spelled_number = "";
    bool not_know = true;

    cout << "Please, enter a spelled-out number\n";
    cin >> spelled_number;

    if (spelled_number == "zero") {
        cout << "0" << endl;
        not_know = false;
    }

    if (spelled_number == "one") {
        cout << "1" << endl;
        not_know = false;
    }

    if (spelled_number == "two") {
        cout << "2" << endl;
        not_know = false;
    }

    if (spelled_number == "three") {
        cout << "3" << endl;
        not_know = false;
    }

    if (spelled_number == "four") {
        cout << "4" << endl;
        not_know = false;
    }

    if (not_know == true) {
        cout << spelled_number << " is not a number I know.\n";
    }

    return 0;
}
