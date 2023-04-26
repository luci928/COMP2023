#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int tmp =a;
    a=b;
    b=tmp;
}

void invertir(int arr[],const int tam){
    for(int i = 0; i <tam/2;i++)
    
        intercambio(arr[i],arr[tam-i-1]);
}

void imprimir(const int arra[],const int tam){
    for(int i = 0; i < tam; i++)
        cout << " " << arra[i];
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    invertir(arr, 7) ;
    imprimir(arr,7);
    return 0;
    }