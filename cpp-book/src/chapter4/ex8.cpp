/*
There is an old story that the emperor wanted to thank the inventor of
the game of chess and asked the inventor to name his reward. The inven-
tor asked for one grain of rice for the first square, 2 for the second, 4 for
the third, and so on, doubling for each of the 64 squares. That may sound
modest, but there wasn’t that much rice in the empire! Write a program to
calculate how many squares are required to give the inventor at least 1000
grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
You’ll need a loop, of course, and probably an int to keep track of which
square you are at, an int to keep the number of grains on the current
square, and an int to keep track of the grains on all previous squares. We
suggest that you write out the value of all your variables for each iteration
of the loop so that you can see what’s going on.
*/

#include "../std_lib_facilities.h"	

//  Function for returning base raised to the power exponent
int numPower(int num, int power){	
	if (power == 0 && num > 0)
		return 1; //  Any non-zero number raised to the power zero always equals one N^0 = 1;
	int total = num;
	for (int i=0; i < (power-1); i++){
		 total = (total * num);
	}	 
	return total;
}

int squaresForGrains(int grains){	
	int sum=0;	
	int i=0;

	while (i<64){
		//cout << pow(2,i) << "\n";
		sum += numPower(2,i); // Here we add no grains of each square.
		//cout << "No. Square: " << i+1 << " -> Grains so far: " << sum << "\n";
		++i;
		if (sum >= grains)
			return (i); // the prior square is the answer
	}	
	return i;
}

int main(){

	cout << "Results:\n";
	//cout << numPower(2,8);

	cout << squaresForGrains(1000) << " squares are required for giving at least 1,000 grains of rice\n";
	cout << squaresForGrains(1000000) << " squares are required for giving at least 1,000,000 grains of rice\n";
	cout << squaresForGrains(1000000000) << " squares are required for giving at least 1,000,000,000 grains of rice\n";
	
}

