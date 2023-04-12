#include <iostream>
using namespace std;

bool esCaracter(char car){

    int val=static_cast<int>(car);
   
    /*if((val>=65&&val<=90)||(val >=97 && val<= 122)){
        return 1;
    }
    else{
        return 0;
    }}*/
    ////////////////////////////////////////////////////////
    //return((val>=65&&val<=90)||(val >=97 && val<= 122));}
}



bool esNumero(char car){

    int val=static_cast<int>(car);
    return(val>=48&&val<=57);
    }

int main(){
    char caracter;
    cout<<"ingrese un caracter: ";
    cin>>caracter;
    cout<<esCaracter(caracter)<<endl;
}
