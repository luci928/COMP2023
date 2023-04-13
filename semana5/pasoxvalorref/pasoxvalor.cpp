#include <iostream>
using namespace std;

void incremento (int a){
    a=a+1;
    cout<<"a dentro de la funcion incremento: "<<a<<endl;

}

int main(){
    int q=3;
    incremento (q);

    cout<< "q en la funcion main "<<q<<endl;

    return 0;
}