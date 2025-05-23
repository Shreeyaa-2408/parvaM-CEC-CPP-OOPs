#include<iostream>
using namespace std;

int main(){
    //declaring the variables with different data type
    string name,college,branch,USN;
    char section;
    int age,sem;
    bool isStudent;
    float height;

    //intializing the values to the variables
    name="Shreeyaa G Rao";
    section='A';
    age=24;
    college="CEC";
    branch="AI/ML";
    USN="1CE24AI079";
    sem=2;
    isStudent=true;
    height=5.3;

    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"height:"<<height<<endl;
    cout<<"college:"<<college<<",branch:"<<branch<<endl;
    cout<<"USN:"<<USN<<endl<<",sem:"<<sem<<endl;
    cout<<"section:"<<section<<",is he/she a student:"<<isStudent<<endl;
}