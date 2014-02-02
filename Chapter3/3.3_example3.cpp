//example3_input_and_type.cpp
//Stroustrup - Example 3 - 3.3 Input Type
//read and write first name and second

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;  //read two strings
    cout << "Hello, " << first << ' ' << second << endl;
    //keep_window_open();
    return 0;
}

