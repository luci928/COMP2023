#include <iostream>
using namespace std;


bool esNumero(char car){

    int val=static_cast<int>(car);
    return(val>=48&&val<=57);
    }
//////////////

int contarDigitoscadena(string cad){

    int contador=0;

    for(int i = 0;i<cad.length();i++){
            if(esNumero(cad.at(i))){
                contador++;
            }
            return contador;
    
}
}

int main(){
    string cadena;
    cout<<"ingrese una cadena: ";
    cin>>cadena;
;

    cout<<contarDigitoscadena(cadena)<<endl;
}