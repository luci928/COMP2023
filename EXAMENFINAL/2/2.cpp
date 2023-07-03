#include <iostream>
using namespace std;

class CDummy{
    public:
    static int n;
        CDummy(){++n;}
        ~CDummy(){--n;}
    };

    int CDummy::n=0;
    int main(){
        CDummy *a;
        if(true){
            CDummy x;
            a=new CDummy;
            cout<<x.n<<endl;

        }
            CDummy b[4];
            CDummy c;
           //cout<<x.n<<endl;

            delete a;
            cout <<b[0].n<<endl;

            return 0;
        
    }


