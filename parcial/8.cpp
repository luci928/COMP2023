#include <iostream>
using namespace std;
//0 1 1 2 3 5 
void fibo(long* ArrEnt, int ArrTam){
    long* ini = ArrEnt ;
    long* ini_2 = ArrEnt + 1;
    long* rep = ArrEnt + 2;

    for(int i = 2; i < ArrTam; ++i){
        *rep = *ini + *ini_2;
        ini = ini_2;
        ini_2 = rep;

        ++rep;
    }}

int main(){
    long ari[6] = {0,1,0,0,0,0};
    fibo(ari,6);

    for(int i = 0; i < 6; ++i){
        cout << ari[i] << " ";
    }}