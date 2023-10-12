#include <iostream>
using namespace std;
// 15 4
void funcionar(char A[][5]){cout<<sizeof(A);}
int main(){
    char Arr[][5]={"Hugo","Paco","Luis"};
    cout<<sizeof(Arr)<<" ";
    funcionar(Arr);
    return 0; 
}


