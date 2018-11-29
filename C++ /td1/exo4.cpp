#include <iostream>
using namespace std;

//fonctions d'echanger le contenu de deux var entieres
void swap1(int *px, int *py){
     int z = *px;
     *px = *py;
     *py = z;
}

void swap2(int &rx, int &ry){
     int z = rx;
     rx = ry;
     ry = z;
}

//fonctions d'echanger le contenu de deux pointeurs d'entiers
void swap3(int **ppx, int **ppy){
     int *pz = *ppx;
     *ppx = *ppy;
     *ppy = pz;  
}

void swap4(int *&prx, int *&pry){
     int *pz = prx;
     prx = pry;
     pry = pz;
}

int main(){
    cout<<"Entrez un entier x : ";
    int a;
    cin>>a;
    
    cout<<"Entrez un entier y : ";
    int b;
    cin>>b;

    int *px, *py;
    px = &a;
    py = &b;
    
    /*
    swap1(&a,&b); //la mm chose de swap1(px,py);
    cout<<"valeur finale de x : "<<*px<<endl;
    cout<<"valeur finale de y : "<<*py<<endl;
    */
    
    /*
    int &rx = a;
    int &ry = b;
    swap2(a,b); //la mm chose de swap2(rx,ry);
    cout<<"valeur finale de x : "<<rx<<endl;
    cout<<"valeur finale de y : "<<ry<<endl;
    */
    
    /*
    int **ppx, **ppy;
    ppx = &px;
    ppy = &py;
    cout<<"contenu de px (avant): "<<px<<endl;
    cout<<"contenu de py (avant): "<<py<<endl;
    cout<<"contenu de x (avant): "<<*px<<endl;
    cout<<"contenu de y (avant): "<<*py<<endl;
    swap3(ppx,ppy);  
    cout<<"contenu de px (après): "<<px<<endl;
    cout<<"contenu de py (après): "<<py<<endl;
    cout<<"contenu de x (après): "<<*px<<endl;
    cout<<"contenu de y (après): "<<*py<<endl;
    */
    
    /*
    int *&prx = px;
    int *&pry = py;
    cout<<"contenu de px (avant): "<<px<<endl;
    cout<<"contenu de py (avant): "<<py<<endl;
    cout<<"contenu de x (avant): "<<*px<<endl;
    cout<<"contenu de y (avant): "<<*py<<endl;
    swap4(prx,pry);  
    cout<<"contenu de px (après): "<<px<<endl;
    cout<<"contenu de py (après): "<<py<<endl;
    cout<<"contenu de x (après): "<<*px<<endl;
    cout<<"contenu de y (après): "<<*py<<endl;
    */
}


