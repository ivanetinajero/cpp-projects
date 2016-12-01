/*

	Make a vector holding the ten string values "zero", "one", . . . "nine".
	Use that in a program that converts a digit to its corresponding
	spelled-out value; e.g., the input 7 gives the output seven. Have the same
	program, using the same input loop, convert spelled-out numbers into
	their digit form; e.g., the input seven gives the output 7.

*/

#include "../std_lib_facilities.h"

int main()
{
	
	vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int val = 0;
	string spell="";
	while (cin >> val){
		if (val>=0 and val <=9){
			cout << "The digit " << val << " spelled-out is " << numbers[val] << "\n";
		}else
			cout << "Only digits are accepted!\n";
	}	
	
}

