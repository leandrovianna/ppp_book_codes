/* ***********************************************************************
    * Filename: exercise3_chapter4.cpp
    * Date: December 26, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 3
    * Description: distances between two cities.
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<double> distances;

    int count = 0; //number of distances
    double sum = 0, smallest, greatest;

    double distance;
    while ( cin >> distance ) {
        count++;
        sum += distance;
        distances.push_back(distance);

        if (count == 1) {
            //if count is 1, this is first value of the distances.
            //So, distance is the initial value of smallest and greatest
            smallest = distance;
            greatest = distance;
        }
        else {
            if (smallest > distance)
                smallest = distance;

            if (greatest < distance)
                greatest = distance;
        }
    }

    cout << "Total distance: " << sum << endl
        << "Smallest distance: " << smallest << endl
        << "Greatest distance: " << greatest << endl
        << "Mean of distances: " << sum / count << endl;

    return 0;
}

