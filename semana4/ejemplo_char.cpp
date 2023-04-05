#include <iostream>
using namespace std;

int main(){
    char n;
    
    cout <<"ingese el caracter: ";
    cin>> n;
    
    int val=static_cast<int>(n);
    if((val>=65&&val<=90)||(val >=97 && val<= 122)){
        cout << "el caracter ingresado es una letra!!"<<endl;
    }
    else{
        cout<<"el caracter ingresado no es!!!"<<endl;
    }
    
    
    
    return 0 ;
}