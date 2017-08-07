#include <cstdlib>
#include <iostream>
using namespace std;

int n=0;

int Raise(int base, int exp){   
   n++;
   //cout << "Raise: " << n << endl; 
   if (exp==0)
      return 1;
   else{
      int x = base * Raise(base, exp -1);
      cout << "Result: " << x << endl; 
      return x;     
   }
}

int main() {

   cout << Raise(2,6);
   
   return 0;
}

