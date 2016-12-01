#include "../std_lib_facilities.h"

// compute mean and median temperatures
int main()
{
		
	vector<double> temps; // temperatures

	for (double temp; cin>>temp; ) // read into temp
		temps.push_back(temp); // put temp into vector
	
	// compute mean temperature:
	double sum = 0;
	for (int x : temps) 
		sum += x;
	cout << "Average temperature: " << sum/temps.size() << '\n';
	
	// compute median temperature:
	sort(temps); // sort temperatures. standard library sort algorithm
	cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}

