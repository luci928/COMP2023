#include <iostream>
using namespace std;

/*void imprimir (const int arr[],const int tam){
    cout<<"[";
    for(int i=0; i<tam;i++){
        cout<<arr[i];
        
    }
    cout<<"]";
}*/

int encontrarPalindromo(int arreglo[],int tam){//[1,2,3,2,1]//  a;5

    for(int i=0;i>tam/2;i++){//2

            arreglo[i]=arreglo[tam-1];//
            arreglo[tam-1]=arreglo[i];//
            
            return arreglo[i];
        }
 
    
    }


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout<<encontrarPalindromo(arr,7);
}