#include <iostream>

using namespace std;

int main()
{

	int num = 10;
	do {

		num+=5;
	} while (num >= 40);
	cout << num << endl;
	cout << endl;

// this seg
	int count,num2=5;
	for(count = 0;count <num2; count++)
		cout << ++count<<" " << num2 - 1 << endl;
}
