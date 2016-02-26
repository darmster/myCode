#include <iostream>

using namespace std;

int main()
{

	double hours= 35.45;
	double rate= 15.00;
	double tolerance = 0.01000;

	cout << "Hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl;

	cout << scientific;
	cout << "Scientific notation: " << endl;
	cout << "Hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl;
	
	cout << fixed;
	cout << "Fixed decimal notation: " << endl;
	cout << "Hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl;

	return 0;
}
