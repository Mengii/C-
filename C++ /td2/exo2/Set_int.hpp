#include <iostream>
using namespace std;

class Set_int {
      int taille;
      int * tab;

   public :
      Set_int(int);
      ~Set_int(); 
      int & operator[](int);  
      void print();   
};
