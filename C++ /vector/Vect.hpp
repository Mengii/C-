#include<iostream>
using namespace std;

class Vect {
      int n;
      double* v;
      
  public:
      Vect(int);
      ~Vect();
      Vect(const Vect&); //constructeur copie
      Vect& operator=(const Vect&); //affectation
      double& operator[](int);
      void print();
};
