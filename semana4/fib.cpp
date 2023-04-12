#include <iostream>
using namespace std;

int fib(int n){
    int n1,n2,fibo;
    n1=n2=fibo=1;
    for(int i=1;i<n;i++){
        fibo =n1+n2;
        n1=n2;
        n2=fibo;
    }
    return fibo;


}

int main(){
    int n;
    cout<<"ingrese el numero: ";
    cin>>n;

    cout<<"el fib es: "<<fib(n)<<endl;
    return 0;
}