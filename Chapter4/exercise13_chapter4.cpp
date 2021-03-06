/* ***********************************************************************
    * Filename: exercise13_chapter4.cpp
    * Date: December 31, 2013 - 16:18
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 13
    * Page: 128
    * Description: Find all prime numbers between 1 and 100 using
    Sieve of Eratosthenes.
   *********************************************************************** */

#include "std_lib_facilities.h"

vector<int> sieve_eratosthenes(int);

int main()
{
    vector<int> primes;

    cout << "Prime Numbers between 1 and 100.\n";

    primes = sieve_eratosthenes(100);

    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << ' ';
    }
}

vector<int> sieve_eratosthenes(int max)
{
    /** Find all prime numbers between 1 and max
        returns a vector<int> with prime numbers
    */
    int max_checked = floor( sqrt(max) );

    vector<int> sequence;
    for (int i = 2; i <= max; ++i)
        sequence.push_back(i);

    int count_checked = 0; //start with first element
    bool finished = false;

    while (finished == false) {
        for (int i = count_checked+1; i < sequence.size(); ++i) {
            if (sequence[i] % sequence[count_checked] == 0) {
                sequence.erase(sequence.begin()+i); //delete element of index i
            }
        }

        if (sequence[count_checked] >= max_checked) //finished
            finished = true;

        ++count_checked;
    }

    return sequence;
}
