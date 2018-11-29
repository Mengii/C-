#include <iostream>
using namespace std;

class A {
      private:
         int x,y;
      public:
         A(); //constructeur I
         A(int abs); //constructeur II
         A(int abs, int ord); //constructeur III
         A(const A &);  //constructeur IV
         ~A(); //destructeur 
         void affiche();
};

A::A(){
   x = 1; y = 0;
   cout<<"constructeur I             : "<<x<<" "<<y<<endl;
}

A::A(int abs){
   x = abs; y = 0;
   cout<<"constructeur II            : "<<x<<" "<<y<<endl;
}

A::A(int abs,int ord){
   x = abs; y = ord;
   cout<<"constructeur III           : "<<x<<" "<<y<<endl;
}

A::A(const A & a){
   cout<<"constructeur IV (de copie) : "<<a.x<<" "<<a.y<<endl;
   x=a.x; y=a.y;
}

A::~A (){
   cout<<"destruction                : "<<x<<" "<<y<<endl;
}

void A::affiche(){
    cout<<"point de coordonnees : "<<x<<" "<<y<<endl;
}

void fct (A, A*); //prototype fonction indépendante fct

main(){
    cout<<"debut main"<<endl;
    A a;
    A b(2);
    A c(10,20);
    A d=a;
    A* adr = new A(3,3);
    fct(a,adr);
    A e(30,40);
    A tab[6]={4,c,0,e};
    for(int i=0;i<6;i++)
       tab[i].affiche();
       cout<<"fin main"<<endl;
}

void fct(A d, A* add){
     cout<<"entree fct"<<endl;
     delete add;
     cout<<"sortie fct"<<endl;
}









































