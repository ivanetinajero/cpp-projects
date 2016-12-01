	/*
	Create a program to find all the prime numbers between 1 and 100. One
	way to do this is to write a function that will check if a number is prime
	(i.e., see if the number can be divided by a prime number smaller than
	itself) using a vector of primes in order (so that if the vector is called
	primes , primes[0]==2 , primes[1]==3 , primes[2]==5 , etc.). Then write a
	loop that goes from 1 to 100, checks each number to see if it is a prime,
	and stores each prime found in a vector . Write another loop that lists the
	primes you found. You might check your result by comparing your vector
	of prime numbers with primes . Consider 2 the first prime.
*/

#include "../std_lib_facilities.h"	

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
	vector<int> primes;
	for (int i = 1; i<=100; i++){
		if (isPrime(i)) 
			primes.push_back(i);
	}

	for (int prime : primes)
		cout << prime << "\n" ;
}