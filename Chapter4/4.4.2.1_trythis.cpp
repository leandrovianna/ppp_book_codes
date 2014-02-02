//trythis_while_statements.cpp
//Date: December 20, 2013
//Stroustrup's Programming Book - Chapter 4: Computation
//Try This - 4.4.2.1 while-statements
//write out a table of characters with their corresponding
//integer values

#include "std_lib_facilities.h"

int main()
{
    int i = 0;

    while (i < 26) {
        cout << char ('a'+i) << "\t" << 'a'+i << endl;
        ++i;
    }
}
