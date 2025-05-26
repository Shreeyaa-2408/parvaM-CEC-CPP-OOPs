#include<iostream>
using namespace std;

class wish{
    private:
        string name;
        int age;
    public:
        wish(){ //default constructor
            name="unknow";
            age=0;
        }

        wish(string n, int a); //parameterized constructor

        void birthdayWishes();// declared the member function
        //{
        //     cout<<"happy Birthday "<<name<<" i know you're "<<age<<" years old."<<endl;
        // }
};
//defining the rules of parameerized constructor outside the class using scope resolution operator
wish::wish(string n,int a){
    name=n;
    age=a;
}
//defining the member function out of the class using scope resolution operator
void wish :: birthdayWishes(){ // syntax: return_type className :: member_function(parameter)(return type is must)
     cout<<"happy Birthday "<<name<<" i know you're "<<age<<" years old."<<endl;
}

int main(){
    string personName;
    int personAge;

    wish person1; //object Declared
    person1.birthdayWishes();
    
    cout<<"enter your name:";
    cin>>personName;
    cout<<"enter your Age:";
    cin>>personAge;

    wish person2(personName,personAge);
    person2.birthdayWishes();

}