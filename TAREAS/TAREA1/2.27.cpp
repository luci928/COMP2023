#include <iostream>
using namespace std;

int main()
{
    char val ;
    cout<<"ingrese un caracter: ";

    cin>>val;

    int valor= static_cast<int>(val);
    cout<<"el equivalente entero de "<<val<<" es "<< valor <<endl;

    return 0;
}