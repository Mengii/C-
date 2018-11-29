#include <iostream>


double abs(double x){
       if(x>0) return x;
       return -x;
}

void sqrt(double x){
       double y = 10.0;
       double eps = 0.000001;
       int cpt=0;
       while(abs(y*y-x)>eps){
             y = 0.5*(y+y/x);
             cpt++;
       }
       std::cout<<y<<std::endl;
       std::cout<<cpt<<std::endl;
}

int main(){
    sqrt(100.0);
}
