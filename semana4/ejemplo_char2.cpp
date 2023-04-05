#include <iostream>
using namespace std;

int main(){
    char n1,n2;
    
    cout <<"ingese el caracter: "<<endl;
    cin>> n1;
    cout <<"ingese el caracter: "<<endl;
    cin>> n2;
    
    int val1=static_cast<int>(n1);
    int val2=static_cast<int>(n2);
    if((val1<=48 && val1>=57 )&&(val2 <=48 && val2>= 57)){
        cout << "uno de los caracteres ingresados no es un numero!!"<<endl;
    }
    else{
        cout<<(val1-'0')+(val2-'0')<<endl;
        }
    
    
    
    return 0 ;
}