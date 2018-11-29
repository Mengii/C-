#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////

int ** pascal (int n,int p){
	
     	int ** tab = new int*[n+1];
     	
     	//ligne 0~2
     	for(int i=0;i<p;i++){
         	tab[i]=new int[i+1]; //tab des rang
         	tab[i][0]=tab[i][i]=1;
         	for(int j=1;j<i;j++){
             		tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
         	}	
     	}
     	//ligne p~(n-p)
	for(int i=p;i<=n-p;i++){
         	tab[i]=new int[p+1]; //tab des rang
         	tab[i][0]=1;
         	for(int j=1;j<p+1;j++){
             		tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
         	}	
     	}
	//ligne (n-p+1)~n	
	for(int i=n-p+1;i<=n;i++){
		tab[i]=new int[n+1-i];  //tab des rang
		for(int j=0; j<n-i+1; j++) {
             		tab[i][j]=tab[i-1][j]+tab[i-1][j+1];	
		}
     	}
	
     	return tab;
}


void affiche(int ** pascal, int n, int p){
     	for(int i=0;i<p;i++){
		cout << endl;
		for(int j=0;j<i+1;j++){
             		cout << pascal[i][j] <<"\t";
		}
     	}  
	for(int i=p;i<=n-p;i++){
		cout << endl;
         	for(int j=0;j<p+1;j++){
             		cout << pascal[i][j] <<"\t";
         	}
     	} 
	for(int i=n-p+1;i<n+1;i++){
		cout << endl;
         	for(int j=0;j<n-i+1;j++){
			cout << pascal[i][j] <<"\t";
         	}
     	}   
     	cout << endl;
}


int main(){
	int n,p;
	cout<<"n = ";
	cin>>n;
	cout<<"p = ";
	cin>>p;
    	int ** tab=pascal(n,p);
    	affiche(tab,n,p);
    	//cout<<supprimer(tab,n)<<endl;
    	//affiche(tab,5);
}
