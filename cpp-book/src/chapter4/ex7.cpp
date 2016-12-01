#include "../std_lib_facilities.h"	

vector<string> numbers; // representation of numbers as strings

void init_numbers()
{
	numbers.push_back("zero");
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");	
}

double getNumber(){
	double num = 0;
	string spelled="";
	if (cin >> num){
		return num;
	}	
	else{
		num = -1;
	   cin.clear();	// clear string after failed attempt to read an integer				
		cin >> spelled;		
		for (int i=0; i<numbers.size(); ++i)			
			if (numbers[i] == spelled)				
				num = i;					
		return num;
	}
}

int main(){
	init_numbers();	
	double val1 = 0;
	double val2 = 0;
	char oper = ' ';
	while (true){
		val1 = getNumber();		
		cin >> oper;
		val2 = getNumber();		

		/*
		cout << "val1: " << val1 << "\n";
		cout << "val2: " << val2 << "\n";
		cout << "oper: " << oper << "\n";
		*/

		if ( (val1 != -1) and (val2 != -1))
		{			
			switch (oper){
				case '+':
					cout << "The sum of " << val1 << " and " << val2 << " is " << (val1 + val2) << "\n";
					break;
				case '-':
					cout << "The difference of " << val1 << " minus " << val2 << " is " << (val1 - val2) << "\n";
					break;
				case '*':
					cout << "The multiplication of " << val1 << " by " << val2 << " is " << (val1 * val2) << "\n";
					break;
				case '/':
					cout << "The division of " << val1 << " between " << val2 << " is " << (val1 / val2) << "\n";
					break;

				default:
					cout << "Operator not supported.\n";
					break;
			}

		}
		else{
			cout << "Bad operation !!.\n";
			cout << "You can write numbers on digits from 0 to 9 spelled out. !!.\n";
		}
	}		
}

