#include <iostream>
using namespace std;

void moyenne1(){
     int tab[10];
     for(int i=0; i<10; i++){
         cout<<"Tapez la valeur numero "<<i<<" : ";
         cin>>tab[i];
     }
     
     int somme = 0;
     for(int i=0;i<10;i++){
	     somme+=tab[i];         
     }
     cout<<"somme = "<<somme<<endl;
     float moyenne=somme/10.0;
     cout<<"moyennes des élements du tableau : "<<moyenne<<endl;
}

void moyenne2(){
     int tab[10];
     for(int i=0; i<10; i++){
         cout<<"Tapez la valeur numero "<<i<<" : ";
         cin>>tab[i];
     }
     int somme = *tab;
     for(int i=1;i<10;i++){
         somme += *(tab+i);
     }
     cout<<"somme = "<<somme<<endl;
     float moyenne=somme/10.0;
     cout<<"moyennes des élements du tableau : "<<moyenne<<endl;
}

int main(){
    //moyenne1();
    moyenne2();
}
