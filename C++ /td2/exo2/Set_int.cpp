#include "Set_int.hpp"

Set_int::Set_int(int t){
       tab = new int[taille=t];
}

Set_int::~Set_int(){
       delete[] tab;
}

void Set_int::print(){
     for(int i=0;i<taille;i++)
        cout<<tab[i]<<" ";
     cout<<endl;
}

int & Set_int::operator[](int i){return tab[i];}
