//example1_hello_world.cpp
//Stroustrup's Programming Book - Chapter 2: Hello, World!
//Example 1 - 2.2 The Classic First Program
//The program outputs the message "Hello, World!" to the monitor

#include "simple_std_lib_facilities.h"

int main() //C++ programs start by executing function main
{
    cout << "Hello, World !\n"; // Output "Hello, World!"
    keep_window_open(); //wait for a character to be entered
    return 0;
}
