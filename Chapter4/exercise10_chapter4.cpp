/* ***********************************************************************
    * Filename: exercise10_chapter4.cpp
    * Date: December 28, 2013 - 16:10
    * Author (Programmer): Leandro Vianna <leandrovianna50@gmail.com>
    * Programming: Principles and Practices using C++ - Bjarne Stroustrup
    * Chapter 4: Computation
    * Exercise 10
    * Page: 127
    * Description: Program that plays Rock, Paper and Scissors game!
   *********************************************************************** */

#include "std_lib_facilities.h"

int main()
{
    cout << "Let's Play \"Rock, Paper, Scissors\" \n";

    string user_answer;
    int user_opt;

    //"Randomly" options
    vector<string> list_machine_opt;
    list_machine_opt.push_back("Rock");
    list_machine_opt.push_back("Scissors");
    list_machine_opt.push_back("Scissors");
    list_machine_opt.push_back("Paper");
    list_machine_opt.push_back("Rock");
    list_machine_opt.push_back("Scissors");
    list_machine_opt.push_back("Rock");
    list_machine_opt.push_back("Paper");
    list_machine_opt.push_back("Scissors");
    list_machine_opt.push_back("Rock");
    list_machine_opt.push_back("Paper");
    list_machine_opt.push_back("Paper");
    list_machine_opt.push_back("Scissors");
    list_machine_opt.push_back("Rock");

    int count_machine_opt = 0; //count which option machine is going to use

    bool tied = false, win = false, error = false;

    cout << "\n\nEnter a answer (Rock, Paper or Scissors)\n";
    while (cin >> user_answer)
    {
        tied = false;
        win = false;
        error = false;

        if (user_answer == "Rock")
            user_opt = 0;
        else if (user_answer == "Paper")
            user_opt = 1;
        else if (user_answer == "Scissors")
            user_opt = 2;
        else
            user_opt = -1;

        switch (user_opt) {
        case 0:
            //The user choose Rock
            if (list_machine_opt[count_machine_opt] == "Rock")
                tied = true;
            else if (list_machine_opt[count_machine_opt] == "Paper")
                win = false;
            else if (list_machine_opt[count_machine_opt] == "Scissors")
                win = true;
            break;
        case 1:
            //The user choose Paper
            if (list_machine_opt[count_machine_opt] == "Rock")
                win = true;
            else if (list_machine_opt[count_machine_opt] == "Paper")
                tied = true;
            else if (list_machine_opt[count_machine_opt] == "Scissors")
                win = false;
            break;
        case 2:
            //The user choose Scissors
            if (list_machine_opt[count_machine_opt] == "Rock")
                win = false;
            else if (list_machine_opt[count_machine_opt] == "Paper")
                win = true;
            else if (list_machine_opt[count_machine_opt] == "Scissors")
                tied = true;
            break;
        default:
            error = true;
            break;
        }

        if (error == true)
            cout << "ERROR: Invalid Input" << endl;
        else if (tied == true)
            cout << "Match tied!" << endl;
        else if (win == true)
            cout << "You Win!!!" << endl;
        else if (win == false)
            cout << "You Lose!" << endl;

        count_machine_opt = (++count_machine_opt) % list_machine_opt.size();

        cout << "\n\nEnter a answer (Rock, Paper or Scissors)\n";
    }
}
