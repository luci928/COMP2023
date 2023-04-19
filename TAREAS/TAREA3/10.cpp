#include <iostream>
using namespace std;
long long Primo(long long num){
    long long int sum{0};
    for (long long counter{3};counter<num/2000; counter+=2){
        if (num%counter==0){
            return 0;}
    }
    return num;
}

int main(){
    long long sum = 0;
    for (long long num{2};num<2000000; ++num){
        sum+=Primo(num);
    }
    cout<<sum;
    return 0;
}