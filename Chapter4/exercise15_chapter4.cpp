/* ***********************************************************************
    * Filename: exercise15_chapter4.cpp
    * Date: December 31, 2013 - 20:27
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 15
    * Page: 128
    * Description: Finds the first n primes
   *********************************************************************** */

#include "std_lib_facilities.h"

bool is_prime(int);
vector<int> finds_nprimes (int);

int main()
{
    cout << "Enter a number of first prime numbers: ";
    int nprimes;
    cin >> nprimes;

    vector<int> prime_numbers = finds_nprimes(nprimes);

    for (int i = 0; i < prime_numbers.size(); ++i) cout << prime_numbers[i] << ' ';
}

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

vector<int> finds_nprimes (int n)
{
    int count_primes = 0; //count primes numbers
    vector<int> primes; //vector of first n prime numbers

    for (int i = 2; count_primes < n; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
            ++count_primes;
        }
    }

    return primes;
}
