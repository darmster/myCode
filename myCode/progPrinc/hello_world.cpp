#include "std_lib_facilities.h"

int main()
{

	double mile = 0;
	double kilometer = 1.609;
	
	cout << "Enter the number of miles: ";
	cin >> mile;
	
	kilometer *= mile;

	cout << "The amount in kilometers is: " << kilometer << endl;
	return 0;
}
