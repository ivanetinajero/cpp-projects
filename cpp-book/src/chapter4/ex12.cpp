	/*
	Modify the program 11 in the previous exercise to take an input
	value max and then find all prime numbers from 1 to max .
*/

#include "std_lib_facilities.h"	

bool isPrime(int num){	
	int count = 0;

	for(int i=2; i<num; i++){	 	
		if(num%i == 0){			 
	         count++;
	         break;
	    }
	}	
	if(count==0){
		//cout << num << " is divisible by " << count << " times\n";
		return true;
	}	
	else{
		//cout << num << " is divisible by " << count << " times\n";
	   	return false;
	}   	
}

int main(){	

	int userInput=0;
	vector<int> primes;
	cout << "Found prime numbers till: ";
	cin >> userInput;

	cout << "Prime numbers: \n";
	
	for (int i = 1; i<=userInput; i++){
		if (isPrime(i)) 
			primes.push_back(i);
	}

	for (int prime : primes)
		cout << prime << "\n" ;
}