//trythis_if_statements.cpp
//Stroustrup's Programming Book - Chapter 4: Computation
//Try This - 4.4.1.1 if-statement
//converts yen, euro, pound in dollar

#include "std_lib_facilities.h"

int main()
{
    const double dollar_per_yen = 0.009; //number of yens in a dollar
    const double dollar_per_euro = 1.366; //number of euros in a dollar
    const double dollar_per_pound = 1.636; //number of pound sterling in a dollar
    double length = 1;
    char currency = 0;

    cout << "Please enter a value followed by a currency"
        << "\n(y for yen, e for euro, p for pound):\n";
    cin >> length >> currency;

    if (currency == 'y')
        cout << "¥" << length << " == U$" << length*dollar_per_yen << endl;
    else if (currency == 'e')
        cout << "€" << length << " == U$" << length*dollar_per_euro << endl;
    else if (currency == 'p')
        cout << "£" << length << " == U$" << length*dollar_per_pound << endl;
    else
        cout << "Sorry, I don't know a currency called '" << currency << "'\n";

    return 0;
}
