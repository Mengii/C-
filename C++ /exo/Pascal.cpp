#include<iostream>
using namespace std;

int ** pascal(int n){
     int ** tab = new int*[n+1];
     for(int i=0;i<=n;i++){
         tab[i]=new int[i+1]; //tab des rang
         tab[i][0]=tab[i][i]=1;
         for(int j=1;j<i;j++){
             tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
         }
     }
     return tab;
}


void affiche(int ** pascal, int n){
     for(int i=0;i<n+1;i++){
		 cout << endl;
         for(int j=0;j<i+1;j++){
             cout << pascal[i][j] <<"\t";
         }
     }    
     cout << endl;
}

int supprimer(int ** pascal, int n){
     for(int i=0;i<=n;i++)
         delete[] pascal[i];
     delete[] pascal;
     return 0;
}

int main(){
    int ** tab=pascal(8);
    affiche(tab,8);
    //cout<<supprimer(tab,5)<<endl;
    //affiche(tab,5);
}
