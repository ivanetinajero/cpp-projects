#include "../std_lib_facilities.h"

int main()
{
   string number = "";
	cout << "Please enter an integer as a text string: ";
   while	(cin >> number){

		if (number=="zero")
			cout << number << " has the value 0\n";
		else
			if (number=="one")
				cout << number << " has the value 1\n";
			else
				if (number=="two")	
					cout << number << " has the value 2\n";
				else
					if (number=="three")
						cout << number << " has the value 3\n";
					else
						if (number=="four")	
							cout << number << " has the value 4\n";
						else
							cout << "not a number I know.\n";
		cout << "Please enter other number: ";
	}
}

