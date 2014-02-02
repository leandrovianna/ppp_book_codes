//exercise3_chapter3.cpp
//Date: Wednesday November 27th, 2013
//Stroustrup's Book - Chapter 3: Objects, Types, and Values
//Exercise 3
//Doesn't do anything, but declares variables with illegal names (PROGRAM WITH ERROR)

#include "simple_std_lib_facilities.h"

int main()
{
    //Variables with legal names
    int number_oranges = 10;
    double money = 9.33;
    string first_name;
    string nick_name;

    //Variable with illegal names
    int double = 0; //double is a type and keyword
    double char = 3.3;
    int x d; //variables names can't have white-space
    double 2d; //variables names can't starts with a number
    int time$to$market; //variables cames can't have symbols (! $ # * %)
    //I not know why compiler accept this.
}
