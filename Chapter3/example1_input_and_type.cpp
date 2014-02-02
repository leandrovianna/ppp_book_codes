//example1_input_and_type.cpp
//Stroustrup - Example 1 - 3.3 Input Type
//read and write first_name and age

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name; //string variable
    int age; //integer variable
    cin >> first_name; //read a string
    cin >> age; //read an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
    //keep_window_open();
    return 0;
}
