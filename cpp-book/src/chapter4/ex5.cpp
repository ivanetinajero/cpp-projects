/*

	Write a program that performs as a very simple calculator. Your calculator
	should be able to handle the four basic math operations — add, subtract,
	multiply, and divide — on two input values. Your program should prompt
	the user to enter three arguments: two double values and a character to
	represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
	program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6
	we look at a much more sophisticated simple calculator.

*/

#include "../std_lib_facilities.h"

int main()
{
	
	double val1 = 0;
	double val2 = 0;
	char oper = ' ';
	while (cin >> val1 >> val2 >> oper){		
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
	
}

