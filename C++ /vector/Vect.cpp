#include "Vect.hpp"

Vect::Vect(int m){
    v = new double[n=m];
}

Vect::~Vect(){
    delete[] v;
}

Vect::Vect(const Vect& x){
    v=new double[n=x.n];
    for(int i=0;i<n;i++)
       v[i]=x.v[i];
}

Vect& Vect::operator=(const Vect& x){
      if(this!=&x){
         delete[] v;
         v=new double[n=x.n];
         for(int i=0;i<n;i++)
             v[i]=x.v[i];
      }
      return *this;
}

double& Vect::operator[](int i){return v[i];}

void Vect::print(){
     for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
     cout<<endl;
}
