#include<iostream>
using namespace std;

class calculate{
    public:
        // member data
        int num1, num2;
        float res;

        //declare the constructor & default constructor(no parameter)
        calculate(){
            //declare the constructor
            num1=5;
            num2=10;
             }
        //member function
        void showOutput(){
            cout<<"addition:"<<num1+num2<<endl;
            cout<<"subraction:"<<num1-num2<<endl;
            cout<<"quotient:"<<num1/num2<<endl;
            cout<<"multiplication:"<<num1*num2<<endl;
            cout<<"remainder:"<<num1%num2<<endl;
        }
};
int main(){
    calculate c1;//object
   // c1.showOutput();//function call
   //assigning the value to the data members
   calculate c2;
   c2.num1=25;
   c2.num2=30;
   c1.showOutput();
   c2.showOutput();
}