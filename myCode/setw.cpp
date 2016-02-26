#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 19;
	int a = 345;
	double y = 76.384;

	cout << fixed << showpoint;

	cout << "12345678901234567890" << endl;
	
	cout << setw(5) << x << endl;

	cout << setw(5) << a << setw(5) << "Hi" << setw(5) << x << endl;

	cout << setprecision(2);
	cout << setw(6) << a << setw(6) << y << setw(6) << x << endl;
	cout << setw(6) << x << setw(6) << y << endl << endl;

	cout << setw(5) << a << x << endl << endl;

	cout << setw(5) << a << x << endl;
	cout << setw(2) << a << setw(4) << x << endl;

	return 0;
}
