#include <iostream>
using namespace std;

int contarCardeCadena(string cad,char car){

    int contador=0;

    for(int i = 0;i<cad.length();i++){
        if(car == cad.at(i)){
            contador++;
        }
    }
    return contador;
}

int main(){
    string cadena;
    cout<<"ingrese una cadena: ";
    cin>>cadena;

    char caracter;
    cout<<"ingrese un caracter: ";
    cin>>caracter;

    cout<<contarCardeCadena(cadena,caracter)<<endl;
}