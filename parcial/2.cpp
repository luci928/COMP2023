#include <iostream>
using namespace std;
// 3 6
int main(){
    int  a=3,  b=6;
    int *p=&a,*q=&b;  
    *p++;
    *q++;
    *p=*q;

    *p++;
    *q++;
    p=q;
    *p++;
    *q++;

    cout <<a<<" "<<b;
    return 0;
}