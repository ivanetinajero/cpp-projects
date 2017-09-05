// tested C++11 and C++14
#include <iostream>

using namespace std;

int main() {

   int num;
   //cout << "num: " << num << endl;
   
   // Declaramos *p, como una direccion de memoria (en stack)
   int *p; 
   
   // Creamos espacio para un entero en esta direccion de memoria (*p) (en heap)
   p = new int;   
   cout << "p: " << p << endl;
   cout << "*p: " << *p << endl;
   
   // asignamos un valor en esta direccion de memoria
   *p = 10;
   cout << "p: " << p << endl;
   cout << "*p: " << *p << endl;
   
   // Declaramos *q, como una direccion de memoria (stack)
   int *q;
   cout << "----------------------------------" << endl;
   // Creamos espacio para un entero en esta direccion de memoria (*q) (en heap)
   q = new int;
   cout << "q: " << q << endl;
   cout << "*q: " << *q << endl;   
   cout << "----------------------------------" << endl;

   // El valor que hay en la direccion de memoria de *q, sera el mismo valor que hay en la direccion de memoria *p
   *q = *p; 
   cout << "*q: " << *q << endl; 
   cout << "*p: " << *p << endl;
   cout << "Las direcciones de memoria son hasta el momento: " << endl;
   cout << "q: " << q << endl; 
   cout << "p: " << p << endl;
   cout << "----------------------------------" << endl;
   
   // ahora q que es una direccion de memoria, sera la misma direccion de memoria que p
   q = p;   
   cout << "Las direcciones de memoria finalmente: " << endl;
   cout << "q: " << q << endl; 
   cout << "p: " << p << endl;   
   cout << "Ya no tenemos forma de accesar a la direccion de memoria de q (orphan)" << endl;
   
   // Dejamos la direccion de memoria de p, como libre (free)
   delete p;
   
   // Esto seria un error, porque q, era la misma direccion de memoria que p.
   // Ya la liberamos anteriormente y aqui queremos librerarla (free) otra vez
   // double free or corruption 
   delete q;
   // Lo que si es valido, es hacer q como NULL
   q = NULL;

   return 0;
}

