#include "std_lib_facilities.h"

int square(int x) // return the square of x
{
	int y = 0;
	for(int i=0; i < x; i++)
	  	y += x; 
		return y;

}

int main()
{
	int i = 8;
	cout << square(i) << endl;
}
