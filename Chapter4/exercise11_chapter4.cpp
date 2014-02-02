/* ***********************************************************************
    * Filename: exercise11_chapter4.cpp
    * Date: December 31, 2013 - 11:15
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 11
    * Page: 127
    * Description: prints prime numbers between 1 and 100
   *********************************************************************** */

#include "std_lib_facilities.h"

inline bool is_prime (int number)
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

    cout << "Prime Numbers between 1 and 100\n";

    for (int n = 1; n <= 100000; ++n) {
        if (is_prime(n)) {          //verifying if n is a prime number.
            primes.push_back(n);    //push n to vector primes
        }
    }

    //printing vector primes
    for (int i = 0; i < primes.size(); ++i) cout << primes[i] << ' ';

    return 0;
}
