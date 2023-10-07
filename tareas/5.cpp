#include<iostream>
using namespace std;

void MULTIPLICAR(int(*p)[3][3]) {
    int (*p1)[3] = *(p + 2);
    int (*p2)[3] = *(p + 1);
    int (*p3)[3] = *p;

    for (; p3 < *(p + 1); ++p3) {
        for (int *z = *p3; z < *(p3 + 1); ++z) {
            for (int *y = *p2, *t = *p1; y < *(p2 + 1) && t < *(p1 + 1); ++y, ++t) {
                *t += (*z) * (*y);
				}++p2;
        }
        p2 = *(p + 1);
        ++p1;
    }

 
    p1 = *(p + 2);//
    for (; p1 < *(p + 3); ++p1) {
        for (int *fin = *p1; fin < *(p1 + 1); ++fin) {
            std::cout << *fin << " ";
        }
        std::cout << std::endl;
    }
}
	
int main(){
	int MATRIZ[3][3][3]={{{4,1,8},{2,3,1},{2,1,2}},{{1,1,0},{1,2,1},{1,1,0}},{{6,0,4},{1,3,0},{5,4,0}}};
	MULTIPLICAR(MATRIZ);
}