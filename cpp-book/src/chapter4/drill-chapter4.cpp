/*
	Drill (page 126)
*/

#include "std_lib_facilities.h"

int main()
{
	// step 7 - 11
	
	double val = 0;
	string unit = "";
	double smaller = 0;
	double larger = 0;
	double meters = 0;
	double total = 0;
	vector<double> list; 
	while (cin >> val >> unit){

		// legal unit
		if ( (unit=="cm" || unit=="m" || unit=="in" || unit=="ft") && val>0 ){

	   	// for the first number, smaller and larger are the same
			if (smaller == 0 && larger==0){
				smaller = val;
				larger = val;
			}
			if (val < smaller)
				smaller = val;
			if (val > larger)
				larger=val;
			
			if (unit=="cm")
				meters = val / 100; // cm to m

			if (unit=="in")
				meters = ((val * 2.54)) / 100; // inch to m

			if (unit=="m")
				meters = val; // if unit == m, we don't do anything			
			
			if (unit == "ft")
				meters = (val * 12 * 2.54) / 100; // Ft to m

			total += meters; // sum of values entered (in meters)
			list.push_back(meters);					
	
		}else
			cout << "Illegal unit\n";		
	}
	cout << "Results:\n"; 
	cout << "The smaller so far: " << smaller << "\n";
	cout << "The larger so far: " << larger << "\n";
	cout << "Sum of values: " << total << "m\n";
	cout << "Number of values:" << list.size() << "\n";
	sort(list);
	cout << "List sorted\n";
	for (double d : list)
		cout << d << "m\n";

	// step 6
   /*
	double val = 0;
	double smaller = 0;
	double larger = 0;
	while (cin >> val){

		cout << "Value entered: " << val << "\n";
		// for the first number, smaller and larger are the same
		if (smaller == 0 && larger==0){
			smaller = val;
			larger = val;
		}
		if (val < smaller)
			smaller = val;
		if (val > larger)
			larger=val;

		cout << "the smaller so far " << smaller << "\n";
		cout << "the larger so far " << larger << "\n";

	}
	*/

	// step 5
	/*
	double val1 = 0;
	double val2 = 0;
	double smaller = 0;
	double larger = 0;

	while (cin >> val1 >> val2){

		if (val1 < val2){
			smaller = val1;
			larger = val2;
		}
		else
			if (val1 > val2){
				smaller = val2;
				larger = val1;
			}
			else
				if (val1 == val2)
					cout << "the numbers are equal \n";

			cout << "the smaller value is: " << smaller << "\n";
			cout << "the larger value is: " << larger << "\n";
			cout << "Difference: " << larger - smaller << "\n";
			// are the numbers almost equal?
			if ( (larger-smaller) < (1.0/100) )
				cout << "the numbers are almost equal \n";
			smaller = 0;
			larger = 0;
	}
	*/
}

