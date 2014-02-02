//example1_an_example_detect_repeated_words.cpp
//Stroustrup - Example 1 - 3.5.1 An Example: Detect Repeated Words
//detects adjacent repeated words in a sequence of words

#include "std_lib_facilities.h"

int main()
{
    string previous = ""; //previous word; initialized to "not a word"
    string current; //current word

    while (cin >> current)         //read a stream of words
    {
        if (previous == current)   //check if the word is the same as last
            cout << "repeated words: " << current << endl;
        previous = current;
    }
}
