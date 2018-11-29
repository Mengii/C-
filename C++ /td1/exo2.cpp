#include <iostream>
using namespace std;

int nb = 0; //la mm chose avec car static ds la fonction

void appel(){
     //static int nb=0;
     for(int i=0;i<5;i++){
	cout<<"appel numero "<<nb<<endl;
	nb++;
     }
}

int main(){
    appel();
}
