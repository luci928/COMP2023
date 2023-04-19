//Múltiplos de 3 o 5
#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int num=1;

    while (num<10){
        if (num%3==0 || num%5==0){
            sum += num;
        }
        num= num+1;
    }

    cout<< sum;
    return 0;
}