#include <iostream>
#include "Set_int.hpp"
using namespace std;

int main(){
    Set_int x(3);
    x[0]=1;
    x[1]=2;
    x[2]=3;
    x.print();


    return 0;
}
