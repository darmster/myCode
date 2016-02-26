#include <iostream>
//#include <string>

// explictly  cast to int, to avoid infinite recursion.
inline iostate operator|(iostate a, iostate b) {
	return iostate(int(a) | int(b));
}
inline iostate& operator|=(iostate& a, iostate b) {
	a = a | b;
	return a;
}
// Repeat for & , %, and ~
inline iostate operator&(iostate a, iostate b) {
	return iostate(int(a) | int(b));
}


int main()
{
	iostate err = goodbit;
	if (error())
		err |= badbit;
}
