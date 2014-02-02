/* ***********************************************************************
    * Filename: example1_logic_errors.cpp
    * Date: January 21, 2014 - 15:51
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 1 - 5.7 Logic Errors
    * Page: 152
    * Description: Finding the lowest, highest and average temperatures in
    a set of data.
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;	//temperatures

	double temp = 0;
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	while (cin >> temp)			//read and put into temps
		temps.push_back(temp);

	for (int i = 0; i < temps.size(); ++i)
	{
		if (temps[i] > high_temp) high_temp = temps[i];		//find high
		if (temps[i] < low_temp) low_temp = temps[i];		//find low
		sum += temps[i];	//compute sum
	}

	cout << "High temperature: " << high_temp << endl;
	cout << "Low temperature: " << low_temp << endl;
	cout << "Average temperature: " << sum/temps.size() << endl;

	return 0;
}
