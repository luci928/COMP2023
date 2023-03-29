//ejercicio de factores
#include <iostream>
using namespace std;
int main(){
    int a=3,b=4,c=12;
    int mult= a*b;

    if (mult%c==0)
        cout<<a<<" y "<<b<<" son factores de "<<c;
    

    else
        cout<<"Los números "<<a<<" y "<<b<<" no son factores de "<<c;
}