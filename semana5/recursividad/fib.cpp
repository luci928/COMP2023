#include <iostream>
using namespace std;

long long fib_rec(int n){//la recursividad no es buemo para el fibo
    if(n==0||n==1){
        return 1;
    }
    else{
        return fib_rec(n-2)+fib_rec(n-1);
}
}

void imprimir(int n){
    for(int i=0;i<n;i++){
        cout<<fib_rec(i)<<" "<<endl;
    }
}


int main(){
    int n;
    cout<<"ingresar el numero; ";
    cin>>n;

    imprimir(n);
    return 0;
}
