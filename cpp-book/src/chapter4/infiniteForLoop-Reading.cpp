#include "../std_lib_facilities.h"

// read some temperatures into a vector
int main()
{
		
	vector<double> temps; // temperatures


	/* 
	What’s new here is that we use the input 	operation, cin>>temp, as the condition for a for-statement. 
	Basically, cin>>temp is true if a value was read correctly and false otherwise, so that for-statement will
	read all the doubles we give it and stop when we give it anything else.
	
	*/

	for (double temp; cin>>temp; ){ // read into temp
		temps.push_back(temp); // put temp into vector
	}
	cout << temps.size();
}

