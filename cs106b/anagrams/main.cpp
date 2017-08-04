// Compile Ubuntu: g++ -std=c++11 main.cpp
// Anagrams

#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
#include <map>
#include <set>

using namespace std;

void Swap (char &c1, char &c2){
   char temp = c1;
   c1 = c2;
   c2 = temp;
}

string Signature(string s){
   
   for (int i = 0; i < s.length(); i++){
      int minIndex = i;
      for (int j = i + 1; j < s.length(); j++)
         if (s[j] < s[minIndex])
            minIndex = j;
      Swap(s[i], s[minIndex]);
   }
   return s;
}

void ReadFile(ifstream &in, map< string, set<string> > &m){
   string word;
   
   while (true) {
      getline(in, word);
      if (in.fail()) 
         break; // no more lines to read
      m[Signature(word)].insert(word);
   }
   
   cout << "Num Words: " << m.size() << "\n\n";   
   int max = 0; // 
   string maxKey;
   for (auto it = m.begin(); it != m.end(); ++it) {
      
      // it->first = the key of the map
      // it->seconf = the value of the map (SET)      
      
      if (it->second.size() > max){
         max=it->second.size();
         maxKey = it->first;
      }          
   }
      
   cout << "Max Anagram Key: " << maxKey << endl;
   cout << "Max Anagram: " << max << "\n\n";

   cout << "The Words are: \n\n";
     
   for (auto it = m[maxKey].begin(); it != m[maxKey].end(); ++it) {     
      cout << *it << endl;
   }
   
}

int main() {
   
   ifstream in("spanish.txt");    
   map<string, set<string> > mapa;
   ReadFile(in,mapa);   
   return 0;
}

