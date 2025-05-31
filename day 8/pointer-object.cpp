#include<iostream>
using namespace std;

class employee{
    private:
        string employeeID, employeename;
        int experience;
        float salary;

    public:
        void adddetails(string id, string name, int exp, float salary){
            employeeID=id;
            employeename=name;
            experience=exp;
            this->salary =salary;
        }

        void showdetails(){
            cout<<"the employee with name "<<employeename<<" bearing "<<employeeID<<" having "<<experience<<"years of experience and recives a salary of Rs."<<salary<<"/-";
        }

};

int main(){
    string empname,empID;
    int empexp;
    float empsalary;

    cout<<"enter your name, employee ID and experience & salary:";
    cin>>empname>>empID>>empexp>>empsalary;

    employee emp1;//object created
    employee *empPtr=&emp1;

    //using the pointer we are assigning the value to the object using pointer dereferenceing & dot operator 
    (*empPtr).adddetails(empID,empname,empexp, empsalary);
    (*empPtr).showdetails();

    //using the pointer we are assigning the value to the object using pointer dereferenceing & arrow operator 
    empPtr->adddetails(empID,empname,empexp, empsalary);
    empPtr->showdetails();

    //dymanically allocating memory  for the pointer object
    //syntax: classname*pointer_name =new classname
    employee *ptremp=new employee;
    ptremp->adddetails("12345PM","shree",3,500000.00);
    ptremp->showdetails();

    // emp1.adddetails<==>(*empPtr).adddetails <==>empPtr->adddetails
}