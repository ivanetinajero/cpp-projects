/*
	Write a program to play a numbers guessing game. The user thinks of a
	number between 1 and 100 and your program asks questions to figure
	out what the number is (e.g., “Is the number you are thinking of less than
	50?”). Your program should be able to identify the number after asking
	no more than seven questions. Hint: Use the < and <= operators and the
	if-else construct.

*/
#include "../std_lib_facilities.h"

int main()
{
	
	int guess = 0;
	int tries = 0;
	//int num = 56; // fixed value
	srand (time(NULL));
	int num = rand() % 100 + 1;  // num in the range 1 to 100
	bool win = false;
	while (!win && tries < 7){
		tries++;
		cout << "Think of a number between 1 and 100: ";
		cin >> guess;		
		
		if (guess == num)			
			win=true; // You win
		
		if (guess > num)
		   cout << "Your number is too large. Give me a smaller: \n";

		if (guess < num)
		   cout << "Your number is too small. Give me a larger: \n";
	}
	if (win)
		cout << "Congratulations ¡¡ YOU WON !!. The number was [" << num << "]. You guessed in " << tries << " tries\n";
	else
	   cout << "Sorry. ¡¡ YOU LOST !!. The number was " << num << "\n\n¡¡ GAME OVER !!\n\n";
}

