#include <iostream>

int main(){
    using namespace std;
    int edad{0};
    cout<<"Ingrese su edad: ";
    cin>>edad;

    float MHR1 = 220 - edad;
    float MHR2 = 208 - 0.7*edad;
    float MHR3 = 207 - 0.7*edad;
    float MHR4 = 211 - 0.64*edad;
    float alta{0}, baja{0};

    if (MHR1<=MHR2&&MHR1<=MHR3&&MHR1<=MHR4) {
                baja = MHR1;  }
    else if (MHR2<=MHR1&&MHR2<=MHR3&&MHR2<=MHR4) {
                baja = MHR2;  }
    else if (MHR3<=MHR1&&MHR3<=MHR2&&MHR3<=MHR4) {
                baja = MHR3;  }
    else if (MHR4<=MHR1&&MHR4<=MHR2&&MHR4<=MHR3) {
                baja = MHR4;  }


    if (MHR1>=MHR2&&MHR1>=MHR3&&MHR1>=MHR4) {
                alta = MHR1;  }
    else if (MHR2>=MHR1&&MHR2>=MHR3&&MHR2>=MHR4) {
                alta = MHR2;  }
    else if (MHR3>=MHR1&&MHR3>=MHR2&&MHR3>=MHR4) {
                alta = MHR3;  }
    else if (MHR4>=MHR1&&MHR4>=MHR2&&MHR4>=MHR3) {
                alta = MHR4;  }

    cout << " Tu MHR es: "<<baja<< " a "<<alta;
    return 0;
    }