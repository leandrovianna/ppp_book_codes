/* ***********************************************************************
    * Filename: trythis_logic_errors.cpp
    * Date: January 21, 2014 - 16:27
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 2 - 5.7 Logic Errors
    * Page: 154
    * Description: eliminate magic constants and choose the min_temp and
    max_temp for "temperatures program"
   *********************************************************************** */

//Answer about -1000 will be min_temp: Yes, Absolute Zero is approximately -500 Fº.
//Answer about 1000 will be max_temp: No for universe, there are stars with temperature
//of 1 billion celsius degrees. But, it's ok for Earth.

#include "std_lib_facilities.h"

int main()
{
    const double min_temp = -1000;
    const double max_temp = 1000;
    double temp = 0;
    double sum = 0;
    double high_temp = min_temp; 	//initialize to impossible low
    double low_temp = max_temp;		//initialize to "impossible high"
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
