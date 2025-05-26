#include<iostream>
using namespace std;

class Area{
    private:
        int length, breath ,height;
        float  radius;
    public:
        int result;

        Area(){ //Default Constructor
            length=0;
            breath=0;
            radius=0;
        }
        Area(int a){
            length=a;
            result=length*length;
            cout<<"area of square:"<<result<<endl;
        }

        Area(int c, int d){
            length =c;
            breath=d;
            result=length * breath;
            cout<<"area of rectangle:"<<result<<endl;
        }

        Area(float r){
            radius = r;
            result = 2*3.142* radius;
            cout<<"area of circle:"<<result<<endl;
        }

        Area(int l, int b, int h){
            length =l;
            breath=b;
            height=h;
            result=length * breath*height;
            cout<<"area of cube:"<<result<<endl;
        }
};