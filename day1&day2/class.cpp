#include<iostream>
using namespace std;

//syntax
//class class_name// class declaration
class Student{
    public:
        string name,college,branch;//data
        int sem;
    void show(){//member function
        cout<<"name:"<<name<<endl;
        cout<<"college:"<<college<<endl;
        cout<<"branch:"<<branch<<endl;
        cout<<"semester:"<<sem<<endl;
    }
};
int main(){
    Student student1;//object creation
    student1.name="varsha";//assing the value to the clas using object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=2;

    student1.show();

    Student student2;//object creation
    student2.name="sania";//assinging the value to the class using object
    student2.college="CEC";
    student2.branch="AIML";
    student2.sem=2;

    student2.show();
}