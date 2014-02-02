/* ***********************************************************************
    * Filename: example1_range_errors.cpp
    * Date: January 19, 2014 - 17:12
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 5: Errors
    * Example 1 - 5.6.2 Range errors
    * Page: 147
    * Description: Catching a exception about a a range error (vector's index)
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
	try {
		vector<int> v;		//a vector of ints
		int x;

		while (cin >> x) v.push_back(x); //set values

		for (int i = 0; i <= v.size(); ++i)		//print values
			cout << "v[" << i << "] == " << v[i] << endl;

	} catch (out_of_range) { //correct: out_of_range, it isn't out_of_range_error
		cerr << "Oops! Range error\n";
		return 1;
	} catch (...) { //catch all other exceptions
		cerr << "Exception: something went wrong\n";
		return 2;
	}
	return 0;
}
