#include <iostream>
using namespace std;

int main(){
    int numero=0;
    cout<<"Ingrese cuatro enteros: ";
    cin>>numero;
/*1,234*/
    if (numero >= 1000){
        int a = numero/1000;
        numero  = numero - a*1000;
        int b = numero/100;
        numero = numero - b*100;
        int c = numero/10;
        numero = numero - c*10;
        int d = numero;
        cout<<d<<"  "<<c<<"  "<<b<<"  "<<a;
    }

return 0;
}