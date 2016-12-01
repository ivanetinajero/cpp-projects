// try (pag 105)
/*
program that converts yen, euros, and pounds into dollars.
*/
#include "../std_lib_facilities.h"

int main()
{
   constexpr double yen_per_dollar = 100.308; // yens in an dollar
   constexpr double euro_per_dollar = 0.8878; // euro in an dollar
   constexpr double pound_per_dollar = 0.7711; // pounds in an dollar
   
	double length = 0; // length in inches or centimeters
	char unit = ' ';
	cout<< "Please enter a length followed by a unit ([y]yen - [e]euro - [p]pound) :\n";
	cin >> length >> unit;
	if (unit == 'y')
		cout << length << " yens == " << length/yen_per_dollar << " dollars.\n";
	else if (unit == 'e')
		cout << length << " euros == " << length/euro_per_dollar << " dollars.\n";
	else if (unit == 'p')
		cout << length << " pounds == " << length/pound_per_dollar << " dollars.\n";
	else
		cout << "Sorry, I don't know a currency called '" << unit << "'\n";
}
