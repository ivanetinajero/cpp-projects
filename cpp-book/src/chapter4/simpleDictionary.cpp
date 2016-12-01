#include "std_lib_facilities.h"

// simple dictionary: list of sorted words
int main()
{
		
	vector<string> words;
	//Ctrl+Z terminates an input stream under Windows and Ctrl+D does that under Unix.
	for(string temp; cin>>temp; ) // read whitespace-separated words
		words.push_back(temp); // put into vector
	cout << "Number of words: " << words.size() << '\n';
	sort(words); // sort the words
	for (int i = 0; i<words.size(); ++i){
		//cout << "Comparing: " << words[i] << "\n";
		if (i==0 || words[i-1] != words[i]){ // is this a new word?			
			cout << words[i] << "\n";
		}
	}
}

