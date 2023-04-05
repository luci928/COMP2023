#include <iostream>
using namespace std;

int main(){
    string cad;
    cout<<"ingrese una cadena: "<<endl;
    cin>>cad;

    char caracter;
    cout<<"ingrese un caracter: "<<endl;
    cin>>caracter;

    int contador=0;

    for(int i = 0;i<cad.length();i++){
        if(caracter == cad.at(i)){
            contador++;
        }
    }
    
    cout<<"el caracter"<<caracter <<"se repite "<< contador << " veces "<<endl;
    
    return 0 ;
}