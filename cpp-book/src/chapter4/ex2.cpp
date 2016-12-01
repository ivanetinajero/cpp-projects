#include "../std_lib_facilities.h"

// compute mean and median temperatures
int main()
{
		

	vector<double> temps; // temperatures
	double median = 0;
	double firstMiddle=0;
	double secondMiddle=0;	 
	for (double temp; cin>>temp; ) // read into temp
		temps.push_back(temp); // put temp into vector
	
	// compute mean temperature:
	double sum = 0;
	for (int x : temps) 
		sum += x;
	cout << "Average temperature: " << sum/temps.size() << '\n';
	
	// compute median temperature:
	sort(temps); // sort temperatures. standard library sort algorithm

	// If the number of elements is even. So, We have to get two average of the 2 middle numbers.
	// Vector example:  1,  2,  3,  "4,  5,"  6,  7,  8 
	if (temps.size()%2==0){ 
		firstMiddle = temps[(temps.size()/2)-1]; // in the vector above "4"
		secondMiddle = temps[(temps.size()/2)];  // in the vector above "5"
		median = (firstMiddle+secondMiddle) / 2; // (4+5) / 2 = 4.5
	}
	else
		median = temps[temps.size()/2];
	cout << "Median temperature: " << median << '\n';

}

