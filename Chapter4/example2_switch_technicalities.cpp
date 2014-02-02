//example2_switch_technicaties.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Example 1 - 4.4.1.3 Switch Technicalities
//case labels must be constants

#include "std_lib_facilities.h"

int main()
{
    //define alternatives:
    int y = 'y';
    const char n = 'n';
    const char m = '?';
    cout << "Do you like fish?\n";
    char a;
    cin >> a;
    switch (a) {
        case n:
            //...
            break;
        case y:  //error: variable in case label
            // ...
            break;
        case m:
            // ...
            break;
        case 'n': //error: duplicate case label (n's value is 'n')
            // ...
            break;
        default:
            // ...
            break;
    }
}
