#include<iostream>
using namespace std;

void sayHello(){      // function declaration 
    cout<<"hello! my world"<<endl;   //function definition
}

int sayhi(string name){  // function with parameters
    cout<<" hi,"<<name<<endl;
}
int greet(string fname, string lname ,int age){  // function with multiple-parameters
    cout<<" hi,"<<fname<<" "<<lname<<",age:"<<age<<endl;
}

int main(){
    string firstName,friendsName,lastName;
    int age;
    cout<<"enter your first name:";
    cin>>firstName;
    cout<<"enter your friend's name:";
    cin>>friendsName;
    cout<<"enter your age:";
    cin>>age;
    cout<<"enter your last name:";
    cin>>lastName;
    sayHello();  // fuction call
    sayhi(firstName); //function with arguments
    sayhi(friendsName);
    greet(firstName,lastName,age);
}