//Suma Números pares de Fibonacci
#include <iostream>
using namespace std;

    int fibonacci (int n) {
        if (n==0 || n==1){
            return 1;
        } 
        else {
            return fibonacci(n-2)+fibonacci(n-1);
        }
    }

    int main (){
        int num = 10;
        int counter = 1;
        int sum = 0;
        while (fibonacci(counter)<num){
            if (fibonacci(counter)%2==0){
                sum+=fibonacci(counter);
            }
            ++counter;
        }
        
        cout << sum;
        
        return 0;
    }