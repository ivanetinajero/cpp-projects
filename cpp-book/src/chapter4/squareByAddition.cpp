/*
	try (page 116)
	square by doing the x*x by repeated addition
*/

#include "../std_lib_facilities.h"

int square(int x) // return the square of x
{
	int result = 0;
	for (int i=0 ; i<x; i++)
		result +=x;
	return result;
}

int main()
{
	cout << square(20) << '\n'; // print 10
	cout << square(100) << '\n'; // print 10000
}
