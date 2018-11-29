#include <iostream>
using namespace std;

void f(int a,int b){
     int somme=0;
     while(a!=0){
           a = a/2;
           b = b*2; 
           cout<<"a = "<<a<<endl;
           cout<<"b = "<<b<<endl;           
           if(a%2!=0){
              somme+=b;
           }
     } 
     cout<<somme<<endl;                                                  
}

int main(){
    f(11,13);
}
