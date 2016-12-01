// try (page 111)

#include "std_lib_facilities.h"

int main()
{
	int i = 97; // start from 0
	char letter = 0;
	while (i<=122) {
		letter = i;
		cout << letter << '\t' << i << '\n';
		++i; // increment i (that is, i becomes i+1)
	}
}
