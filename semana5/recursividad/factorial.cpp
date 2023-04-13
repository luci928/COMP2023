#include <iostream>
using namespace std;

long long factorial(int n){
    if(n==0){
        return 1;
    } else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"ingrese el numero: ";
    cin>>n;

    cout<<"el factorial de "<<n<<" es "<<factorial(n)<<endl;
    return 0;
}