#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrAge = &age; // address reference of age (pointer referencing)
    
    string name;
    string *nameptr=&name;
    cout<<"enter your name & age:";
    cin>>name>>age;

    //*ptrAge & *nameptr - pointer Dereferencing
    cout<<"your name is "<<(*nameptr)<<", you're "<<(*ptrAge)<<" years old.";
    cout<<" the address of name is stored in pointer(nameptr):"<<nameptr<<endl;
    cout<<" the address of age is stored in pointer(ptrAge):"<<ptrAge<<endl;

    int *num1 = new int(5);//dynamic memory allocation
    // the reference  variable is not needed for assigning the address to the pointer we can use new keyword
    cout<<" the value within the pointer num1:"<<(*num1);

    int size;
    int *arr = new int[size];

    cout<<"enter the size of an array";
    cin>>size;

    cout<<"enter the "<<size<<" element into an array:";
    for (int i=0; i< size;i++){
        cin>>arr[i];
    }

    cout<<"the array contains"<<size<<"elements, they are:"<<endl;
    for (int i=0; i< size;i++){
        cout<<arr[i]<<endl;
    }

}