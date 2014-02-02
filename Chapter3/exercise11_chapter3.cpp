//exercise11_chapter3.cpp
//Date: Friday November 29th 2013
//Stroustrup's Programming Book - Chapter 3: Objects, Types, and Values
//Exercise 11

#include "std_lib_facilities.h"

int main()
{
    int pennies, //1-cent coins
        nickels, //5-cent coins
        dimes, //10-cent coins
        quarters, //25-cent coins
        half_dollars, //50-cent coins
        one_dollar; //100-cent coins

    cout << "How many pennies do you have?\n";
    cin >> pennies;

    cout << "How many nickels do you have?\n";
    cin >> nickels;

    cout << "How many dimes do you have?\n";
    cin >> dimes;

    cout << "How many quarters do you have?\n";
    cin >> quarters;

    cout << "How many half dollars do you have?\n";
    cin >> half_dollars;

    cout << "How many one-dollar coinsŔ do you have?\n";
    cin >> one_dollar;

    if (pennies == 1)
        cout << "You have 1 penny.\n";
    if (pennies != 1)
        cout << "You have " << pennies << " pennies.\n";

    if (nickels == 1)
        cout << "You have 1 nickel.\n";
    if (nickels != 1)
        cout << "You have " << nickels << " nickels.\n";

    if (dimes == 1)
        cout << "You have 1 dime.\n";
    if (dimes != 1)
        cout << "You have " << dimes << " dimes.\n";

    if (quarters == 1)
        cout << "You have 1 quarter.\n";
    if (quarters != 1)
        cout << "You have " << quarters << " quarters.\n";

    if (half_dollars == 1)
        cout << "You have 1 half dollar.\n";
    if (half_dollars != 1)
        cout << "You have " << half_dollars << " half dollars.\n";

    int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50);

    cout << "The value of all of your coins is " << total_cents << " cents.\n";

    double total_dollars = total_cents / 100.0;

    cout << "The value of all is $" << total_dollars << ".\n";

    return 0;
}
