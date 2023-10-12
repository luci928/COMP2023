#include <iostream>
using namespace std;
//123467
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;}
    
void merge(int* impar, int* par){
    int* ini = impar;
    int* mid = par;
    int* mid2 = par;
    int* fin = mid + (mid - ini);

    while(fin >= mid){
        for(int* i = ini; i < mid; ++i){
            if(*i > *(i + 1)){
                swap(i,(i + 1));
            } }
        ini++;
        mid++;

        for(int* j = mid2; j <= fin; ++j){
            if(*j > *(j + 1)){
                swap(*j, *(j + 1));
            }}
        mid2--;
        fin--;
    }}
int main(){
    int array[6] = {1,3,7,2,4,6};
    merge(array, array + 2);
    for(int i = 0; i < 6; ++i){
        cout << array[i] << " ";
    }}