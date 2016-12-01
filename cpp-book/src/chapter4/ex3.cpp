/*
	Read a sequence of double values into a vector. Think of each value as
	the distance between two cities along a given route. Compute and print
	the total distance (the sum of all distances). Find and print the smallest
	and greatest distance between two neighboring cities. Find and print the
	mean distance between two neighboring cities.
*/
#include "../std_lib_facilities.h"

int main()
{
		
	vector<double> distances; // distances
	double temp = 0;
	double total = 0;
	while (cin>>temp) // read into temp				
		distances.push_back(temp); // put temp into vector
		
	double smaller = 0;
	double larger = 0;
	if (distances.size()>0){ // at least 1 element
		// Inicially the smaller and larger are the first element.
		smaller = distances[0];
		larger = distances[0];
		for (double d : distances){
			total += d;
			if (d < smaller) smaller = d;
			if (d > larger) larger = d;
		}
		cout << "Total: " << total << "\n";
		cout << "Smaller: " << smaller << "\n";
		cout << "Larger: " << larger << "\n";
		cout << "Average: " << total/distances.size() << "\n";
	}		
	
}

