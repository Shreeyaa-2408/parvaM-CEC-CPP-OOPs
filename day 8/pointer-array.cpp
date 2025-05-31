#include<iostream>
using namespace std;

class Employee{ //base class
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID=id;
            employeeName=name;
            experience=exp;
            this->salary=salary;
        }

        void showDetails(){
            cout<< "The employee with name "<<employeeName<<" bearing "<<employeeID<<" having "
            <<experience<< " years of experience and receives a salary of Rs, "<<salary<<"/-"<<endl;
        }
};

class Skill : public Employee{ //derived class(single inheritance)
    private:
         int skillCount;
         string *skills; //Pointer Array

    public:
        Skill(){
            cout<<"No Data Found!"<<endl;
        }  //Default constructor without initializing any values

        Skill(int count){  // Parameterized constructor
            skillCount=count;
            skills= new string[skillCount]; //Dynamically Allocating Memory for Pointer array(skills)
            cout<<"Dynamically created the pointer array-skills"<<endl;  //optional
            cout<<"Enter the "<<count<<" technologies you're familiar with: "<<endl;
            for(int i=0;i<count;i++){ //Array Intialization
                cout<<"Skill "<<i+1<<":";
                cin>>skills[i];
            }
        }

        void showSkills(){

            cout<<"Skills known "<<endl;
            for(int i=0;i<skillCount;i++){ //Display the content of skill array
                cout<<i+1<<". "<<skills[i]<<endl;
            }
        }

        ~Skill(){
            delete[] skills;  //Free up the Memory Allocated by pointer Array using delet keyword
            cout<< "Memory has been cleared by the Destructor!"<<endl;
        }
};

int main(){
    string emp_name,emp_id;
    int emp_exp,skill_count;
    float emp_salary;

    cout<< "Enter the following Details of the Employee: "<<endl;
    cout<< "Employee Id, name, Years of Experience,Salary: "<<endl;
    cin>>emp_id>>emp_name>>emp_exp>>emp_salary;
    
    cout<<"Enter the number of technologies you know: "<<endl;
    cin>>skill_count;

    //pointer refering to object s1 of skill classs which can also inherit the properties of Employee class
    Skill s1(skill_count);
    Skill *emp1=&s1;  //pointer object - *emp

    s1.addDetails(emp_id,emp_name,emp_exp,emp_salary);
    
    emp1->showDetails();
    emp1->showSkills();

    Skill s2;
}