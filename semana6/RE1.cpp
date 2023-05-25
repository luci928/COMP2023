#include <iostream>
using namespace std;

int encontrarPalindromo(int arreglo){
    int palin=0;
    int num = arreglo;
    while(num>0){
        palin=palin * 10 + (num % 10);
        num = num / 10;
        }
    
    if (arreglo==palin){
        return arreglo;
    }else{
        return 0;
    }
}

int main(){
    int num=1321;
    if(encontrarPalindromo(num)){
        cout<<"si es palimdromo";
    }
    else{
        cout<<"no es palindromo";
    }
}