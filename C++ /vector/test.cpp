#include <iostream>
#include "Vect.hpp"
using namespace std;

int main(){
    Vect x(3);
    x[0]=1;
    x[1]=2;
    x[2]=3;
    Vect y(x); //appel du construteur copie
    x.print();
    y.print();
    return 0;
}


