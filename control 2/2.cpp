#include <iostream>
using namespace std;
void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    }

void invertirV(int *a , int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    }