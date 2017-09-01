// tested with C++11 and C++14
#include <cstdlib>
#include <iostream>

using namespace std;

void RecSubsets(string soFar, string rest)
{
   if (rest == "")
      cout << soFar << endl;
   else {
      // add to subset, remove from rest, recur
      RecSubsets(soFar + rest[0], rest.substr(1));
      // don't add to subset, remove from rest,recur
      RecSubsets(soFar, rest.substr(1));
   }
}

void ListSubsets(string str)
{
   RecSubsets("", str);
}

int main() {

   while(true){
      cout << "? ";
      string s;
      getline(cin,s);
      ListSubsets(s);
   } 
   
   return 0;
}

