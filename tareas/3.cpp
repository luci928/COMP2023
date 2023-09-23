#include <iostream>
using namespace std;
void swap(int* p, int* q) {
int a = *p;
*p = *q;
*q = a;
}
void cocktail(int *INI , int*FIN) {
bool sswap{ true };
while (sswap && INI < FIN) {
int a{ 0 };
for (int* p = INI; p < FIN; p++) {
if (*p > *(p + 1)) {
swap(p, p + 1);
a++;
}
else {
continue;
}
}
FIN--;
for (int* p = FIN; p > INI; p--) {
if (*p < *(p - 1)) {
swap(p, p - 1);
a++;
}
else {
continue;
}
}
INI++;
if (a == 0) {
sswap = false;
}
else {
sswap = true;
}
}
}
int main()
{
int A[] = {10,15,3,1,20,0,7,9};
int tam{ sizeof(A) / 4 };
cocktail(A, A + tam-1);
for(int* p=A;p<A+tam;p++){
    cout<<*p<<"";
}
}