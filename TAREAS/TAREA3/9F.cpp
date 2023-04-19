#include <iostream>
using namespace std;

int contarCardeCadena(string cad){//numero,digitos


            return cad-(cad.at(0)-'0');
            
    
    }


int main(){
    string cadena;
    cout<<"ingrese una cadena: ";
    cin>>cadena;
 

    cout<<contarCardeCadena(cadena)<<endl;
}