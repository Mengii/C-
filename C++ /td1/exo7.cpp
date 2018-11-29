#include <iostream>
using namespace std;

void f1(int t[], int taille){
     t = new int[taille];
}

void f2(int t[], int taille){
     for(int i=0; i<taille; i++){
         cout<<"Tapez la valeur numero "<<i<<" : ";
         cin>>t[i];
     }
}

int f3(int t[], int taille){
     int somme = 0;
     for(int i=0;i<taille;i++){
        somme+=t[i];
     }
     return somme;
}

void f4(int t[]){
    delete[] t;
}

int main(){
    int tab[] = {1,2,3,4,5};
    f1(tab, 5);
    f2(tab, 5);
    cout<<"somme = "<<f3(tab, 5)<<endl;

    int *b;
    b=new int[100];
    f4(b);
    
    return 0;
}
