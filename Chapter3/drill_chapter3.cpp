//drill_chapter3.cpp
//Date: 24/11/2013
//Stroustrup's Book - Chapter 3
//Drill - Chapter 3
//Simple Form Letter based on user input

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name; //first_name is a variable of type string
    cin >> first_name; //read characters into first_name

    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you. What happened to you?\n"
        << "I have a new job in a supermarket! I am very happy with it!\n"
        << "How is your mother? My mother always asks about her. Don't be a stranger!\n"
        << "My mother and I look forward to seeing you. Take care!" << endl;

    cout << "Type another friend name: ";
    string friend_name; //another friend name
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex = 0;

    cout << "Enter 'm' if friend is male or 'f' if friend is female (without quotes): ";
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me." << endl;

    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me." << endl;

    cout << "Enter the age of the recipient: ";
    int age;
    cin >> age;

    if (age <= 0)
        error ("you're kidding!");

    if (age >= 110)
        error ("you're kidding!");

    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 12)
        cout << "Next year you will be " << age+1 << ".\n";

    if (age == 17)
        cout << "Next year you will be able to vote." << endl;

    if (age > 70)
        cout << "I hope you are enjoying retirement." << endl;

    cout << "Yours sincerely," << endl;

    cout << "\n\nLeandro." << endl;
}
