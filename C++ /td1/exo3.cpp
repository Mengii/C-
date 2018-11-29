#include <iostream>
using namespace std;

bool mul2(int n){
     if(n%2==0){
	//cout<<"multiple de 2\n";
	return true;
     }
     else {
    	//cout<<"non multiple de 2\n";
	return false;
     }
}

bool mul3(int n){
     if(n%3==0){
	//cout<<"multiple de 3\n";
	return true;
     }
     else {
	//cout<<"non multiple de 3\n";
	return false;
     }
}

int main(){
    cout<<"entrez un entier : ";
    int n;
    cin>>n;
    if (mul2(n)==true){
	cout<<"pair\n";
    }
    if (mul3(n)==true){
	cout<<"divisible de 3\n";
    }
    if (mul2(n)==true&&mul3(n)==true){
	cout<<"divisible de 6\n";
    }
}
