#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int step=0;
const int NotFound = -1;

void WriteFile(ofstream &out, int count){
   for (int i = 1; i < count+1; i ++){
      out << i << endl;
   }   
}

vector<int> ReadFile(ifstream &in){
   string number;
   vector<int> vector;
   while (true) {
      getline(in,number);
      //cout << number << endl;
      if (in.fail()) 
         break; // no more lines to read
      vector.push_back(stoi(number));
   }   
   return vector;
}

int BSearch(vector<int> &vector, int start, int stop, int num){
   step++;
   cout << "Step: " << step << endl;
   
   if (start > stop) return NotFound;
   int mid = (start + stop) / 2;
   if (num==vector[mid])
      return mid;
   else
      if (num < vector[mid])
         return BSearch(vector, start, mid-1, num);
      else   
         return BSearch(vector, mid+1, stop, num);
}

int main() {

   string fileName="numeros.txt";
   ofstream outFile(fileName);
   // Llenamos el archivo con numeros consecutivos   
   WriteFile(outFile,1500); 
   outFile.close();
   ifstream inFile(fileName); 
   vector<int> listNumbers = ReadFile(inFile);
   inFile.close();  
   
   int n = listNumbers.size();
   int start = 0;
   int stop = n - 1;   
   int search=1350;   
   int position = BSearch(listNumbers,start,stop,search); 
   cout << "Vector size: " << n << endl;
   cout << "Searching: " << search << " Found at position: " << position;
   return 0;   
}

