/* ***********************************************************************
    * Filename: exercise2_chapter4.cpp
    * Date: December 26, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 2
    * Description: compute mean and median values (median algorithm improved)
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
    for (unsigned int i = 0; i < temps.size(); ++i) sum += temps[i];
    cout << "Average temperature: " << sum / temps.size() << endl;

    //compute median temperature:
    sort (temps.begin(), temps.end());  //sort temps
                                        //"from the beginner to the end"
    double median = 0;

    if (temps.size() % 2 != 0)
        median = temps[temps.size() / 2];
    else
        median = (temps[temps.size()/2] + temps[(temps.size()/2)-1]) / 2;

    cout << "Median temperature: " << median << endl;

    return 0;
}
