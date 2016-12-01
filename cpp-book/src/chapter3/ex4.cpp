#include "../std_lib_facilities.h"

// determine the smaller, larger, sum, difference, product, and ratio of these values
int main()
{
   int val1 = 0;
   int val2 = 0;
	cout << "Enter 2 integer numbers: \n";
   cin >> val1 >> val2;
   
	if (val1 < val2)
		cout << val1 << " < " << val2 << "\n";
	if (val1 > val2)
		cout << val1 << " > " << val2 << "\n";

	cout << val1 << " + " << val2 << " = " <<  val1+val2 << "\n";
   cout << val1 << " - " << val2 << " = " <<  val1-val2 << "\n";
   cout << val1 << " * " << val2 << " = " <<  val1*val2 << "\n";
   cout << val1 << " / " << val2 << " = " <<  val1/val2 << "\n";

}
