#include <iostream>

using namespace std;

int main()
{

	int *p;
	int *q;

	p = new int;
	*p = 34;
	cout << "Line 12: p = " << p << ", *p = " <<  *p << endl;
	
	q = p;
	cout << "Line 15: q = " << q << ", *q = " << *q << endl;

	*q = 45;
	cout << "Line 19: p = " << p <<  ", *p = " << *p << endl;
	cout << "Line 20: q = " << q <<  ", *q = " << *q << endl;

	p = new int;
	*p = 18;
	cout << "Line 24: p = " << p <<  ", *p = " << *p << endl;
	cout << "Line 25: q = " << q <<  ", *q = " << *q << endl;
	
	delete q;
	q = NULL;
	q = new int;
	*q = 62;
	cout << "Line 30: p = " << p <<  ", *p = " << *p << endl;
	cout << "Line 32: q = " << q <<  ", *q = " << *q << endl;

	return 0;
}
