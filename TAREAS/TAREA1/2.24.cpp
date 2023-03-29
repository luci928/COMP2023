//suma par o impar
#include <iostream>
using namespace std;

int main(){
    int a=6,b=4, sum=a+b;

    if (a%2==0){
        cout<<a<<" es par"<<endl;
    }
    else{
        cout<<a<<" es impar"<<endl;
    }

    if (b%2==0){
        cout<<b<<" es par"<<endl;
    }
    else{ 
        cout<<b<<" es impar"<<endl;
    }

    if (sum%2==0){
        cout<<"La suma de "<<a<<" y "<<b<<" es par"<<endl;
    }
    else{
        cout<<"La suma de "<<a<<" y "<<b<<" es impar"<<endl;
    }
return 0;
}