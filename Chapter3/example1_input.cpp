//example_input.cpp
//Date: 28/10/2013
//Stroustrup - Example - 3.1 Input
//read and write a first name

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name (followed by <enter>):\n";
    string first_name; //first_name is a variable of type string
    cin >> first_name; //read characters into first_name
    cout << "Hello, " << first_name << "!\n";

    //keep_window_open(); //for Windows don't close the program
    return 0;
}
