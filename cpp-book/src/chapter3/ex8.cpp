#include "../std_lib_facilities.h"

// program to test an integer value to determine if it is odd or even.
int main()
{
   int number = 0;
	cout << "Enter a number: \n";
	cin >> number;
	if (number % 2 == 0)
		cout << "The value " << number << " is even\n"; 
	else
		cout << "The value " << number << " is odd\n"; 
}
