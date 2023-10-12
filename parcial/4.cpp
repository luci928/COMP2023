#include <iostream>
using namespace std;
// HugoPacoLuis
int main(){
    char Arr[3][5]={"Hugo","Paco","Luis"};
   
    for(char*p=*Arr;p<&Arr[2][4];p++)
        cout<<*p<<"";

    return 0; 
}


