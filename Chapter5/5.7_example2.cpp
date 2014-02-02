/* ***********************************************************************
    * Filename: example2_5.7.cpp
    * Date: January 21, 2014 - 16:14
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 2 - 5.7 Logic Errors
    * Page: 154
    * Description: a improved version of "temperatures program"
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    double temp = 0;
    double sum = 0;
    double high_temp = -1000; 	//initialize to impossible low
    double low_temp = 1000;		//initialize to "impossible high"
    int no_of_temps = 0;

    while (cin >> temp) {	//read temp
		++no_of_temps;		//count temperatures
		sum += temp;		//compute sum
		if (temp > high_temp) high_temp = temp;		//find high
		if (temp < low_temp) low_temp = temp;		//find low
    }

    cout << "High temperature: " << high_temp << endl;
	cout << "Low temperature: " << low_temp << endl;
	cout << "Average temperature: " << sum/no_of_temps << endl;

	return 0;
}
