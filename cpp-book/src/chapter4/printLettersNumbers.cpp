// try (page 113)

#include "../std_lib_facilities.h"

int main()
{
	int i = 97; // start from 0
	char letter = 0;
	cout << "lower case\n";
	for (int i = 97; i<=122; i++) {
		letter = i;
		cout << letter << '\t' << i << '\n';
	}
	cout << "upper case\n";
	for (int i = 65; i<=90; i++) {
		letter = i;
		cout << letter << '\t' << i << '\n';
	}
	cout << "digital numbers\n";
	for (int i = 48; i<=57; i++) {
		letter = i;
		cout << letter << '\t' << i << '\n';
	}
}
