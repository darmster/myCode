#include "std_lib_facilities.h"


int main()
{


const double dollar = 1.00;
double euro = 0.7724, pound = 0.6197, yen = 79.75;
int amtDollars = 1;
char currency = ' ';

cout << "Enter the amount of dollars that you would like exchanged and the type of currency (e.g. y = yen, e = euro and p = pound): ";
cin >> amtDollars >> currency;
cout << endl;

if (currency == 'e')
	cout << "The exchange rate of " << amtDollars << " is: " << (euro/dollar) * amtDollars << endl;
else if (currency == 'p')
	cout << "The exchange rate of " << amtDollars << " is: " << (pound/dollar) * amtDollars << endl; 
else if (currency == 'y')
	cout << "The exchange rate of " << amtDollars << " is: " << (yen / dollar) * amtDollars << endl;
else
	cout << "This exchange program only converts Euro, Pounds and Yen" << endl;
}
