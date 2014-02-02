/* ***********************************************************************
    * Filename: example1_a_text_example_vector.cpp
    * Date: December 25, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Example 1 - 6.4.3 A text example
    * Description: simple dictionary: list of sorted words
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<string> words;
    string temp;

    while ( cin >> temp )       //read whitespace-separated words
        words.push_back(temp);  //put into vector

    cout << "Number of words: " << words.size() << endl;

    sort (words.begin(), words.end()); //sort "from beginning to end"

    for (int i = 0; i < words.size(); ++i)
        if (i == 0 || words[i-1] != words[i]) //is the new word?
            cout << words[i] << "\n";
}
