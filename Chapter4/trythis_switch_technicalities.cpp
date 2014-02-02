//trythis_switch_technicalities.cpp
//Date: December 20, 2013
//Stroustrup's Programming Book - Chapter 4: Computation
//Try This - 4.4.1.3 Switch Technicalities
//converts yen, euro, pound, yuan and kroner in dollar using switch-statement

#include "std_lib_facilities.h"

int main()
{
    const double dollar_per_yen = 0.009; //number of yens in a dollar
    const double dollar_per_euro = 1.366; //number of euros in a dollar
    const double dollar_per_pound = 1.636; //number of pound sterling in a dollar
    const double dollar_per_yuan = 0.164; //number of yuan in a dollar
    const double dollar_per_kroner = 0.183; //number of kroner in a dollar
    double length = 1;
    char currency = 0;

    cout << "Please enter a value followed by a currency"
        << "\n(y for yen, e for euro, p for pound, u for yuan, k for kroner):\n";
    cin >> length >> currency;

    switch (currency) {
        case 'y':
            cout << "¥" << length << " == US$" << length*dollar_per_yen << endl;
            break;
        case 'e':
            cout << "€" << length << " == US$" << length*dollar_per_euro << endl;
            break;
        case 'p':
            cout << "£" << length << " == US$" << length*dollar_per_pound << endl;
            break;
        case 'u':
            cout << "Yuan " << length << " == US$" << length*dollar_per_yuan << endl;
            break;
        case 'k':
            cout << "Kroner " << length << " == US$" << length*dollar_per_kroner << endl;
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }
    return 0;
}
