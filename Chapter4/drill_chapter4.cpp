/* ***********************************************************************
    * Filename: drill_chapter4.cpp
    * Date: December 25, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Drill - Chapter 4
    * Description: Drill of chapter 4 - while-loop that reads in two ints.
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    //Drill 6th to end
    double number, largest = 0, smallest = 0, sum = 0;
    vector<double> values;
    string unit;

    //Getting a initial value for largest and smallest
    /*cin >> number >> unit;
    cout << number << unit << endl;
    largest = number; //new largest number
    smallest = number; //new smallest number*/

    while (cin >> number >> unit)
    {
        if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
            cout << number << unit << endl;

            if (unit == "cm")
                number = number / 100;
            else if (unit == "in")
                number = (number * 2.54) / 100;
            else if (unit == "ft")
                number = 12 * number * 2.54 / 100;

            if (largest < number)
                largest = number; //new largest number

            if (smallest > number)
                smallest = number; //new smallest number

            sum += number; //sum
            values.push_back(number);//push in vector
        }
        else {
            cout << "Invalid unit!" << endl;
        }
    }

    cout << "Smallest: " << smallest << "m" << endl
        << "Largest: " << largest << "m" << endl
        << "Number of values: " << values.size() << endl
        << "Sum: " << sum << "m" << endl;

    sort(values.begin(), values.end());

    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << "m ";

    /*
    //Drill 1st to 5th
    //Status: Work!
    double n1, n2;
    cout << "Enter two integers\n";
    while (cin >> n1 >> n2)
    {
        cout << n1 << ' ' << n2 << endl;

        //Writes smaller and larger value:
        if (n1 < n2) {
            cout << "the smaller value is: " << n1 << endl;
            cout << "the larger values is: " << n2 << endl;

            if (n2 - n1 < (1.0 / 100))
                cout << "the numbers are almost equal" << endl;
        }
        else if (n2 < n1) {
            cout << "the smaller value is: " << n2 << endl;
            cout << "the larger values is: " << n1 << endl;

            if (n2 - n1 == (1.0 / 100))
                cout << "the numbers are almost equal" << endl;
        }
        //Writes if the numbers are equal:
        else {
            cout << "the numbers are equal" << endl;
        }
    }
    */

    return 0;
}
