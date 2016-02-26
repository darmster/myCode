/*
	Darmilabs code project out of book programming principles and practice
	chapter 3 exercise #6
	4/29/12

	Program description#

        Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. 
	So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together. 
	So, the input 4 54 should give 4, 4, 5.
*/
#include "std_lib_facilities.h"

int main()
{

	int num1,num2,num3,swap;
	cout << "Enter 3 numbers :) ";
	cin >> num1 >> num2 >> num3;
	if(num1 < num2 && num2 < num3)
		cout << num1 <<" "<< num2 << " " << num3 << endl;
	else if (num1 > num2 && num2 > num3)
			cout << num3 << " " << num2 << " "<< num1 << endl;
	else if (num1 < num2 && num2 > num3 && num1 < num3)
		cout << num1 << " " << num3 << " " << num2 << endl; 
	else if (num1 < num2 && num2 > num3 && num1 > num3)
		cout << num3 << " " << num1 << " " << num2 << endl; 
	else 
		cout << num2 << " " << num1 << " " << num3 << endl;
	
	/*
	if (num1 >=  num2 && num1 <= num3) 
	{
		swap = num1;
		num1 = num2;
		num2 = swap;
	}
	else if (num1 < num2 && num2 > num3) 
		{
			swap = num2;
			num3 = num2;
			num2 = swap;
		}
	else if
	*/
	
	return 0;

}
