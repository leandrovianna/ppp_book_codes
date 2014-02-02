/* ***********************************************************************
    * Filename: example2_a_numeric_example_vector.cpp
    * Date: December 24, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Example 2 - 4.6.2 A numeric example
    * Description: compute mean and median values
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<double> temps; //temperatures
    double temp;
    while ( cin >> temp )       //read
        temps.push_back(temp);  //put into vector

    //compute mean temperature:
    double sum = 0;
    for (int i = 0; i < temps.size(); ++i) sum += temps[i];
    cout << "Average temperature: " << sum / temps.size() << endl;

    //compute median temperature:
    sort (temps.begin(), temps.end());  //sort temps
                                        //"from the beginner to the end"
    cout << "Median temperature: " << temps[temps.size()/2] << endl;

    return 0;

}
