//trythis_for_statements.cpp
//Date: December 20, 2013
//Stroustrup's Programming Book - Chapter 4: Computation
//Try This - 4.4.2.3 for-statements
//write out a table of characters with their corresponding integer values
//using for-loop

#include "std_lib_facilities.h"

int main()
{
    //lowercase letters table
    for (int i = 0; i < 26; ++i) {
        cout << char ('a'+i) << "\t" << 'a'+i << endl;
    }

    //uppercase letters table
    for (int i = 0; i < 26; ++i) {
        cout << char ('A'+i) << "\t" << 'A'+i << endl;
    }

    //digits table
    for (int i = 0; i < 10; ++i) {
        cout << char ('0'+i) << "\t" << '0'+i << endl;
    }
    return 0;
}
