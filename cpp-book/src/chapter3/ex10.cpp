#include "../std_lib_facilities.h"

int main()
{
   
	string operation ="";
	double num1=0;
	double num2=0;
	double res = 0;
	while (cin >> operation >> num1 >> num2){
		/*cout << operation << "\n";
		cout << num1 << "\n";
		cout << num2 << "\n";
		*/
		if (operation=="+" || operation == "plus")
			res = num1 + num2;
		else
			if (operation=="-" || operation == "minus")
				res = num1 - num2;
			else	
				if (operation=="*" || operation == "mul")
					res = num1 * num2;
				else
					if (operation=="/" || operation == "div")
						res = res = num1 / num2;
					else
					 	simple_error("sorry: bad operator: " + operation);
		// Print the result
		cout << num1 << " " << operation << " " << num2 << " = " << res << "\n\n";
			
		cout << "Again: ";
	}
}

