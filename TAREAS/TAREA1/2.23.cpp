#include <iostream>
using namespace std;
int a,b,c,d,e;
int main(){
    cin>>a>>b>>c>>d>>e;
    if (a>b && a>c && a>d && a>e)
        cout<<"entero mayor es: "<<a<<endl;  
    else if (b>a && b>c && b>d && b>e)
        cout<<"entero mayor es: "<<b<<endl;
    
    else if (c>a && c>b && c>d && c>e)
        cout<<"entero mayor es: "<<c<<endl;
    
    else if (d>a && d>b && d>c && d>e)
        cout<<"entero mayor es: "<<d<<endl;
    else        
        cout<<"entero mayor es: "<<e<<endl;


    if (a<b && a<c && a<d && a<e){
        cout<<"entero menor es: "<<a<<endl;
    }
    else if (b<a && b<c && b<d && b<e){
        cout<<"entero menor es: "<<b<<endl;
    }
    else if (c<a && c<b && c<d && c<e){
        cout<<"entero menor es: "<<c<<endl;
    }
    else if (d<a && d<b && d<c && d<e){
        cout<<"entero menor es: "<<d<<endl;
    }
    else {
        cout<<"entero menor es: "<<e<<endl;
    }

    return 0;
}