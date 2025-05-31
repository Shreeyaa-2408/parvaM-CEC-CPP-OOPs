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