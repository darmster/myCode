#include <iostream>
#include <ostream>

using namespace std;

void func(int i)
{
	cout << "int: " << i << endl;
}

namespace N {
	void func(double d)
	{
		cout << "double: " << std::showpoint << d << endl;
	}

	void call_func()
	{
		// even though func(int) is a better match, the compiler finds
		// N::func(double) first.
		func(3);
	}
}

int main()
{
	N::func(5);
	func(5);
	N::call_func();		//prints "double: 3.00000"
	using N::func;
	using ::func;
	using N::call_func;
	// now all overloaded func()s are at the same scope level.
	func(4.0);	// prints "int: 4"
	func(4);
	call_func();
}
