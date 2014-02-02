//trythis_input_and_type.cpp
//Stroustrup - Try This - 3.3 Input Type
//modify example 1 to write out the age in mounths

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name; //string variable
    double age; //integer variable
    cin >> first_name; //read a string
    cin >> age; //read an integer
    cout << "Hello, " << first_name << " (age " << age*12 << " mounths)\n";
    //keep_window_open();
    return 0;
}
