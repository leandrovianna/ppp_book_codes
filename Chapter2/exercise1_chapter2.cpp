//exercise1_chapter2.cpp
//Stroustrup's Programming Book - Chapter 2: Hello, World!
//Exercise 1
//Write "Hello, programming! Here we go!" in monitor

#include "simple_std_lib_facilities.h"

int main() //C++ programs start by executing function main
{
    cout << "Hello, programming!\nHere we go!";
    keep_window_open(); //wait for a character to be entered
    return 0;
}
