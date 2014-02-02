/* ***********************************************************************
    * Filename: exercise12_chapter4.cpp
    * Date: December 31, 2013 - 16:00
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 12
    * Page: 128
    * Description: prints prime numbers between 1 and max
   *********************************************************************** */

#include "std_lib_facilities.h"

bool is_prime (int number)
{
    //a number is a prime number when
    //is divisible by only 1 and itself
    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
            //number is divisible by i
            //that is not 1 or itself
            return false;
    }

    //a function not returned false.
    //so, number is a prime number (return true)
    return true;
}

int main()
{
    vector<int> primes;
    int max;

    cout << "Enter max number: ";
    cin >> max;

    cout << "Prime Numbers between 1 and " << max << endl;

    for (int n = 1; n <= max; ++n) {
        if (is_prime(n)) {          //verifying if n is a prime number.
            primes.push_back(n);    //push n to vector primes
        }
    }

    //printing vector primes
    for (int i = 0; i < primes.size(); ++i) cout << primes[i] << ' ';

    return 0;
}
