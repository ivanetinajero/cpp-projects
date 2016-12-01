#include "../std_lib_facilities.h"

// a program that produces a simple form letter based on user input
int main()
{
	cout << "Enter the name of the person you want to write to\n";	
	string first_name=""; // string variable
	cin >> first_name; // read a string
	cout << "Dear " << first_name << ",\n";
   cout	<< "	How are you?\n";
   cout	<< "I am fine. I miss you.\n";
   cout	<< "Last week I went to Guanajuato, Guanajuato. I had a good time!!!\n";

	string friend_name="";
   cout << "Enter the name of your best friend?\n ";
   cin >> friend_name;
   cout << "Have you seen " << friend_name << " lately?\n"; 
	char friend_sex = 0;
   cout << "enter an m if the friend is male and an f if the friend is female?\n";
	cin >> friend_sex;
 	
	if (friend_sex == 'm')
		cout << "If you see "<< friend_name << " please ask him to call me.\n" ;

   if (friend_sex == 'f')
		cout << "If you see "<< friend_name << " please ask her to call me.\n" ;

	int age = 0;
	cout << "enter the age of the recipient?\n ";
   cin >> age; 
	cout << "I hear you just had a birthday and you are "<< age << " years old.\n"; 
   
	if (age == 0)
  		simple_error("you're kidding!");    
	if (age < 0)
  		simple_error("you're kidding!");    
	if (age >= 110)
  		simple_error("you're kidding!");

	if (age < 12 )
  		cout << "Next year you will be " << age+1 << "\n";
	if (age == 17 )
  		cout << "Next year you will be able to vote.\n";
   if (age > 70 )
  		cout << "I hope you are enjoying retirement.\n";
	
	cout << "Yours sincerely\n"; 
	cout << "\n\n"; 
	cout << "Ivan.\n";

}
