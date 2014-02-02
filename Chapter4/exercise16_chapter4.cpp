/* ***********************************************************************
    * Filename: exercise16_chapter4.cpp
    * Date: December 31, 2013 - 23:05
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 16
    * Page: 128
    * Description: finds mode of a sequence of numbers.
   *********************************************************************** */

#include "std_lib_facilities.h"

int modeof(vector<int>);

int main()
{
    int number, mode, largest = 0;
    vector<int> sequence;

    cout << "Type positive integers\n";

    while (cin >> number) {
        sequence.push_back(number);

        if (number > largest)
            largest = number;
    }

    mode = modeof(sequence);

    cout << "The mode is " << mode << endl;
    return 0;
}

int modeof(vector<int> numbers)
{
    int mode;

    int prev_mode_times = 0;
    int mode_times; //times that the mode appears

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j]) {
                mode_times++;
            }
        }

        if (mode_times > prev_mode_times) {
            prev_mode_times = mode_times;
            mode = numbers[i];
        }
    }

    return mode;
}
