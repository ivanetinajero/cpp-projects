/*
	Create a program to find all the prime numbers between 1 and 100. There
	is a classic method for doing this, called the “Sieve of Eratosthenes.” If
	you don’t know that method, get on the web and look it up. Write your
	program using this method.

	http://www.geeksforgeeks.org/sieve-of-eratosthenes/
*/

#include "std_lib_facilities.h"	

vector<int> primes;

void initVector(int max){	
	for (int i = 0; i<max+1; i++)
		primes.push_back(-1);	
}

void printVector(int max){	
	cout << "Results:\n";
	for (int i = 1; i<max+1; i++)
		cout << "index: " << i << " has: " << primes[i] << "\n";
}

int nextUnCheck(int p,int max){
	for (int i = p; i<max+1; i++){
		if (primes[i]==-1)
			return i;
	}	
	return -2;			
}

int main(){	

	int max = 50;
	initVector(max);
	
	int p = 2; // Initially, let p equal 2, the first prime number.
	int next=0;
	while(true){
		cout << "Calando con: " << p << "\n";			
		for (int i = p; i<max+1; i++){			
			if (i%p==0)
				primes[i]=0;							
		}

		p = nextUnCheck(p,max);
		if (p==-2)
			break;				
	}
	
	printVector(max);
}
