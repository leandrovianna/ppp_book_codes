/* ***********************************************************************
    * Filename: example1_a_numeric_example_vector.cpp
    * Date: December 24, 2013
    * Author (Programmer): Leandro Vianna
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Example 1 - 4.6.2 A numeric example
    * Description: read a some temperatures into a vector
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<double> temps; //temperatures
    double temp;
    while ( cin >> temp )       //read
        temps.push_back(temp);  //put into vector
    //.... do something ....
}
