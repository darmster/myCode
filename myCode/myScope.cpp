#include <iostream>
#include <ostream>
using namespace std;
int main()
{
	int x = 255;
	for (int i = 0; i < 10; ++i)
	{
		int x = 4;
		if ( x < i )
		{
		 double x = 3.14;
		 std::cout << x << endl;	//prints 3.14
		}

		std::cout << x << endl;		//prints 42
	}
	std::cout << x << endl;			//error: no x declared in this scope
return 0;
}

