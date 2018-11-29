#include <iostream>
using namespace std;
void output(float (*p)[3], int n);
void max1();
float max2(float (*p)[3], int n);

int main(){
    max1();
    /*
    float a[3][3];
    for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cout<<"Tapez la valeur de t["<<i<<"]";
             cout<<"["<<j<<"] : ";
             cin>>a[i][j];  
         }      
     }
    cout<<"La matrice est : \n";
    output(a,3);
    cout<<"L'element max de la matrice = "<<max2(a,3)<<endl;
    */
    return 0;
}


void max1(){
     float t[3][3];
     for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cout<<"Tapez la valeur de t["<<i<<"]";
             cout<<"["<<j<<"] : ";
             cin>>t[i][j];  
         }      
     }
     float max = t[0][0];
     for(int i=1;i<3;i++){
         for(int j=1;j<3;j++){
             if(t[i][j]>max){
                max=t[i][j];
             }
         }
     }
     cout<<"max = "<<max<<endl;
}

void output(float (*p)[3], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<*(*(p+i)+j)<<" ";
		}			
		cout<<endl;
	}
}

float max2(float (*p)[3], int n){
	int i=0,j=0;
	float max=*(*(p+i)+j);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			if(*(*(p+i)+j)>max){
				max=*(*(p+i)+j);
			}				
		}			
	}
	return max;
}

