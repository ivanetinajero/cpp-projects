/* try (page 109)
Program that converts yen, euros, pounds, yuan and kroner into dollars
*/
#include "../std_lib_facilities.h"

int main()
{
   constexpr double yen_per_dollar = 100.308; // yens in an dollar
   constexpr double euro_per_dollar = 0.8878; // euro in an dollar
   constexpr double pound_per_dollar = 0.7711; // pounds in an dollar
   constexpr double yuan_per_dollar = 6.6683; // yuan in an dollar
   constexpr double krone_per_dollar = 6.6183; // krone in an dollar
	
   double length = 0; // length in inches or centimeters
	char unit = '0';
	cout<< "Please enter a length followed by a unit ([1]yen - [2]euro - [3]pound - [4]yuan - [5]krone :\n";
	cin >> length >> unit;
	switch (unit){
		case '1':
			cout << length << " yens == " << length/yen_per_dollar << " dollars.\n";
			break;
		case '2':
			cout << length << " euros == " << length/euro_per_dollar << " dollars.\n";
			break;
		case '3':
			cout << length << " pounds == " << length/pound_per_dollar << " dollars.\n";
			break;
		case '4':
			cout << length << " yuan == " << length/yuan_per_dollar << " dollars.\n";
			break;
		case '5':
			cout << length << " krones == " << length/krone_per_dollar << " dollars.\n";
			break;
		default:
			cout << "Sorry, I don't know a currency called '" << unit << "'\n";
			break;
	}
}
