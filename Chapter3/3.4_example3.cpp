//example3_operations_and_operators.cpp
//Stroustrup's Book - Chapter 3: Objects, Types, and Values
//Example 3 - 3.4 Operations and Operators
//read and compare names

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;  //read two strings
    if (first == second) cout << "that's the same name twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';
    return 0;
}
