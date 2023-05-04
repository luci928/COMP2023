#include <iostream>
using namespace std;
void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    }

void invertirV(int *a , int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    }

void invertir(int *arr , int tam) {
    int ini = 0;
    int *fin = (ini+tam - 1);
    while(ini < fin){
        intercambio(*ini++,*fin--);
        }
    }

void invertirRec(int *ini , int *fin) {
    if(ini>=tam-1)
        return;
    intercambio(*ini,*fin);
    invert
    irRec(++ini, --fin);
    }

void print(const int arr[] , int tam[]) {
    cout<<"[";
    for(int i=0;i < tam;i++)
        cout<< *(arr+i)<<" ";
    cout<<"]"<<endl;
    }

int main(){
    int arr[] = {1,2,3,4,10,9,5};
    int tam=sizeof(arr) / sizeof(arr[0])
    invertir(arr,7);
    print(arr,7);
    invertirRec(arr,7);
    print(arr,7);
    return 0;
    }