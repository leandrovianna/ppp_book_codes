/* ***********************************************************************
    * Filename: trythis_a_text_example_vector.cpp
    * Date: December 25, 2013
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Try This - 4.6.3 A text example
    * Description: Bleeps out words that I don't like
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    vector<string> words;
    string temp;

    vector<string> dislikeds(4); //disliked words
    dislikeds[0] = "Broccoli";
    dislikeds[1] = "Tomato";
    dislikeds[2] = "Carrot";
    dislikeds[3] = "Onion";

    bool is_liked;

    while ( cin >> temp )
        words.push_back(temp);

    for (int i = 0; i < words.size(); ++i) {
        is_liked = true;

        for (int j = 0; j < dislikeds.size(); ++j) { //test word
            if (words[i] == dislikeds[j])
            {
                cout << "BLEEP ";
                is_liked = false; //this word is not liked.
            }
        }

        if (is_liked == true) //Is it liked?
            cout << words[i] << ' '; //yes, it will printed.
    }

    return 0;
}
