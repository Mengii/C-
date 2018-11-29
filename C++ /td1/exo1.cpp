#include <iostream>
using namespace std;

void f1(){
    cout<<"Bonjour\n";
}

void f2(int n){
    for(int i=0;i<n;i++) {
	cout<<"Bonjour\n";
    }
}

int somme(int x,int y){
    return x+y;
}

int main(){
     f1();
     f2(5);
     cout<<somme(1,2)<<endl;
}
