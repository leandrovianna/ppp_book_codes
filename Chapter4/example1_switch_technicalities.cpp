//example1_switch_technicaties.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.1.3 Switch Technicalities
//you can switch only on integers, etc.
//program with ERROR

#include "std_lib_facilities.h"

int main()
{
    cout << "Do you like fish?\n";
    string s;
    cin >> s;
    switch (s) { //error: the value must be a integer, char or enum type
        case "no":
            // ...
            break;
        case "yes":
            // ...
            break;
    }
}
