#include <iostream>
using namespace std;

void BubbleSort(int a[],int n){
    int aux,i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            if(a[j-1]>a[j]){
                aux=a[j-1];
                a[j-1]=a[j];
                a[j]=aux;
            }}}}

void imprimir(const int arra[],const int tam){
    for(int i = 0; i < tam; i++)
        cout << " " << arra[i];
    
}

int main(){
    int a[]={1,2,5,3,4,6};
    BubbleSort(a,6);
    imprimir(a,6);
}