#include "../std_lib_facilities.h"

// convert age into months
int main()
{
	cout << "Please enter your first name and age\n";	
	string first_name=""; // string variable	
	double  age=0; // double variable
	cin >> first_name; // read a string
	cin >> age; // read a double   
	cout << "Hello, " << first_name << " (age " << age << ")\n";
	cout << "You've lived " << (age * 12)  << " months.\n";
}
