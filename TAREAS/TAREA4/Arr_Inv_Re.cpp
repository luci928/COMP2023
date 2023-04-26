#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int tmp =a;
    a=b;
    b=tmp;
}

void invertirrec(int arr[],const int tam,int i=0){
    if(i ==tam/2)
        return;
    intercambio (arr[i],arr[tam-i-1]);
    invertirrec(arr,tam,++i);
        
}

void imprimir(const int arra[],const int tam){
    for(int i = 0; i < tam; i++)
        cout << " " << arra[i];
    
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    invertirrec(arr, 7) ;
    imprimir(arr,7);
    return 0;
    }