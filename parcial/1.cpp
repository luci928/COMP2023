#include <iostream>
using namespace std;
//123456
int main(){
    /////////////200,204,208,212,216,220
    int a[2][3]={{1,  2,  3},{ 4, 5,  6}};
  
    for(int*i=*a;i<*a+6;i++)
        cout<<*i<<" ";

    return 0; 
}


