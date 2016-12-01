#include "../std_lib_facilities.h"

// program that converts from miles to kilometers
int main()
{
   int miles = 0;
	cout << "Enter the number of miles: \n" ;
   cin >> miles;
	cout <<  miles << " miles are equivalent to : " << (miles * 1.609) << " km.\n";
}
