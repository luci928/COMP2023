#include <iostream>
using namespace std;//&& no es un operador

void intercambio(int &a,int &b){//{probar}void intercambio(int a,int b)
    int tmp=a;
    b=tmp;
    cout <<"el valor de a en intercambio"<<a<<endl;
    cout <<"el valor de b en intercambio"<<b<<endl;
}

int main(){
    int q=10;
    int r=20;

    intercambio(q,r);

    cout <<"el valor de q en main"<<q<<endl;
    cout <<"el valor de r en main"<<r<<endl;

    return 0;
}