//example_an_example_find_repeated_words.cpp
//Stroustrup Book - Chapter 3: Objects, Types and Values
//Example 1 - 3.6.1 An Example: Find Repeated Words
//count words and output the count for repeated word.

#include "std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previous = " "; //not a word
    string current;

    /*Modified by Leandro Vianna*/
    cout << "Type a text: ";
    /*End of Modified*/

    while (cin >> current)
    {
        ++number_of_words; //increase word count

        if (previous == current)
            cout << "word number " << number_of_words
                << " repeated " << current << endl;

        previous = current;
    }
}
