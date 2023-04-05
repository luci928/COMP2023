#include <iostream>
using namespace std;

int main(){
    string cad;
    cout<<"ingrese una cadena: ";
    cin>>cad;


    int suma=0;

    for(int i = 0;i<cad.length();i++){
        suma += (cad.at - '0');
        }
    }
    
    cout<<suma<<endl;
    
    return 0 ;
}
}