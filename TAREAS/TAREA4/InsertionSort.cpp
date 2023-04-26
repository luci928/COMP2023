
#include <iostream>
using namespace std;


    void insert(int arr[],int tam){
        for(int i=0;i<tam;i++){
            int al=i;
            int camb =arr[i];

            while((al>0) && (arr[al-1]>camb)){
                arr[al]=arr[al-1];
                al--;
            }

            arr[al]=camb;
        }
    }

void imprimir(const int arra[],const int tam){
    for(int i = 0; i < tam; i++)
        cout << " " << arra[i];
    
}

    
int main(){
    int arreglo []={4,1,2,3,5};
      insert(arreglo,5);
      imprimir(arreglo,5);
    } 


 