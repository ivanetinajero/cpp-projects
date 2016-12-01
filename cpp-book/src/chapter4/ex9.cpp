/*
	Try to calculate the number of rice grains that the inventor asked for in
	exercise 8 above. You’ll find that the number is so large that it won’t fit
	in an int or a double . Observe what happens when the number gets too
	large to represent exactly as an int and as a double . What is the larg-
	est number of squares for which you can calculate the exact number of
	grains (using an int )? What is the largest number of squares for which
	you can calculate the approximate number of grains (using a double )?

	1. What is the largest number of squares for which you can calculate the exact number of
	grains (using an int )? 
		R: With ints, we can only calculate 31 squares. 

	2. What is the largest number of squares for which 	you can calculate the approximate 
	number of grains (using a double )?
		R: With double,, we can only calculate 1023 squares.
*/

#include "../std_lib_facilities.h"	

//  Function for returning base raised to the power exponent
//int numPower(int num, int power){	
double numPower(int num, int power){	
	if (power == 0 && num > 0)
		return 1; //  Any non-zero number raised to the power zero always equals one N^0 = 1;
	//int total = num;
	double total = num;
	for (int i=0; i < (power-1); i++){
		 total = (total * num);
	}	 
	return total;
}

//int squaresForGrains(int grains){	
double squaresForGrains(double grains){	
	//int sum=0;	
	double sum=0;	
	int i=0;

	while (i<1050){
		//cout << pow(2,i) << "\n";
		sum += numPower(2,i); // Here we add no grains of each square.
		cout << "No. Square: " << i+1 << " -> Grains so far: " << sum << "\n";
		++i;
		//if (sum >= grains)
		//	return (i); // the prior square is the answer
	}	
	return i;
}

int main(){

	cout << "Results:\n";
	//cout << numPower(2,8);

	cout << squaresForGrains(1000) << " squares are required for giving at least 1,000 grains of rice\n";
	//cout << squaresForGrains(1000000) << " squares are required for giving at least 1,000,000 grains of rice\n";
	//cout << squaresForGrains(1000000000) << " squares are required for giving at least 1,000,000,000 grains of rice\n";
	//cout << squaresForGrains(18446744073709600000.0) << " squares are required for giving at least 18446744073709600000 grains of rice\n";
	
}

