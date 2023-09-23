#include <iostream>
using namespace std;
void swap(int* p, int* q) {
int a = *p;
*p = *q;
*q = a;
}
void orden(int* INI, int* MID) {
int* FIN = { MID + (MID - INI) };
while(INI<MID && MID < FIN){
if (*INI > *MID) {
for (int* temp = INI; temp < MID; temp++) {
swap(temp,MID);
}
MID++;
}
else {
INI++;
}
}
}
int main()
{
int A[] = {1,4,7,9,13,18,2,3,6,13,20,27};
int tam{ sizeof(A) / 4 };
orden(A, A + tam/2);
for (int* p = A; p < A + tam; p++) {
cout << *p << " ";
}
}