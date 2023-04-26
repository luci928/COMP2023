#include <iostream>
using namespace std;


bool palin(int arr[],  int ini,int fin){

    if(ini>=fin)
        return 1;
    else if(arr[ini]==arr[fin]){
        palin(arr,ini+1,fin-1);
    }
    else{
        return false;
        }
}
int palindromo(int arr[],int tam){
    bool pal=palin(arr,0,tam-1);
    if(pal==true)
        cout<<"si es palindromo";
    else{
        cout<<"no es palindromo";
    }
}


int main() {
    int arr[] = {1,2,3,2,1};
    
    palindromo(arr, 5);
    return 0;
    }