#include <iostream>
using namespace std;


int palin(int arr[],  int tam){
    int t;
    for(int i = 0; i <tam/2;i++){
        if(arr[i]==arr[tam-i-1]){
            t= 1;
        }
        else{
            t=0;
        }    
    }
    if(t==1){
    cout<<"es palindromo";}
    else{
        cout<<"no es palindromo";
    }
}


int main() {
    int arr[] = {1,2,3,2,1};
    
    palin(arr,5);
    
   
    return 0;
    }