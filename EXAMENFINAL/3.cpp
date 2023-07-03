#include<iostream>
using namespace std;
class Polygon {
    protected:
        int width , height;
    public:
        Polygon(int a, int b):width(a),height(b){}
        int area (void ){return 0;}
        void printarea(){
            cout <<this->area()<< '\n';
        }
};

/*
a) virtual int area()=0;

b) 
class Rectangle:public Polygon{
    public:
        Rectangle(int a, int b):polygon (a,b){}
        int area(){
            return a*b;}
        }

class Triangle:public Polygon{
    Triangle(int a,int b):polygon(a,b){}
    int area(){return (a*b)/2;}}

c)
class Polygon{
    int width ;
    int height;
    int height;
    int polygon *data;

    public:
        Polygon(int a, int b): width(a),height(b){}
        Polygon(Polygon arr[],int size){
            this -> size =size;
            data =new polygon [size];
            for (int i=0;i<size;i++){
                data[i]=arr[i];
            }        
        } 

    int main(){
        Rectangle r1(5,4);
        Triangle t1(3,6);
        Polygon *arr[]{&r1,&t1};
        Polygon data (arr,2);
    }
}
*/
