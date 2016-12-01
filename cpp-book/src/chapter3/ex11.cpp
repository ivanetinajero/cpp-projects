#include "../std_lib_facilities.h"

int main()
{
	// Equivalents in cents
   int val_pennies = 1;
	int val_nickels = 5;
	int val_dimes = 10;
	int val_quarters = 25;
	int val_half_dollar = 50;
	int val_one_dollar = 100;
	double total = 0;	

	int pennies = 0;
	cout << "How many pennies do you have?: "; 
	cin >> pennies;

	int nickels = 0;
	cout << "How many nickels do you have?: "; 
	cin >> nickels;
	
	int dimes = 0;
	cout << "How many dimes do you have?: "; 
	cin >> dimes;

	int quarters = 0;
	cout << "How many quarters do you have?: "; 
	cin >> quarters;
	
	int half_dollar = 0;
	cout << "How many half dollar do you have?: "; 
	cin >> half_dollar;		
		
	int one_dollar = 0;
	cout << "How many dollar do you have?: "; 
	cin >> one_dollar;

	total = (val_pennies * pennies) + 
			  (val_nickels * nickels) +
			  (val_dimes * dimes) +
			  (val_quarters * quarters) + 
			  (val_half_dollar * half_dollar) + 
			  (val_one_dollar * one_dollar);

	if (pennies == 1)
		cout << "You have " << pennies << " penny\n.";
	else
		cout << "You have " << pennies << " pennies.\n";

	if (nickels == 1)
		cout << "You have " << nickels << " nickel.\n";
	else
		cout << "You have " << nickels << " nickels.\n";

	if (dimes == 1)
		cout << "You have " << dimes << " dime.\n";
	else
		cout << "You have " << dimes << " dimes.\n";

	if (quarters == 1)
		cout << "You have " << quarters << " quarter.\n.";
	else
		cout << "You have " << quarters << " dimes.\n.";

	if (half_dollar == 1)
		cout << "You have " << half_dollar << " half dollar.\n";
	else
		cout << "You have " << half_dollar << " half dollars.\n";

	if (one_dollar == 1)
		cout << "You have " << one_dollar << " dollar.\n";
	else
		cout << "You have " << one_dollar << " dollars.\n";

	cout << "The value of all of your coins is " << total << " cents.\n";
	cout << "The value of all of your coins is $" << (total/100) << " dollars.";
}


