/*
	try (page 125)
	Write a program that “bleeps” out words that you don’t like;
*/

#include "../std_lib_facilities.h"

int main()
{
		
	vector<string> disliked = {"kill","dead","ghost","hurt"};
	string word=""; 
	bool exist=false;
	while (cin>>word){
		for (string s : disliked)
			if (s==word)
				exist=true;
		if (exist){
			cout << "BLEEP\n";
			exist=false;
		}
		else
			cout << "I like the word: " << word << "\n";
	}
}

