#include<iostream>
using namespace std;

class name{
    private:
        string name, branch;
        int sem;
    public:
        void setname(string n){
            name= n;
        }

        void setdetails(string branch, int sem){ // as the parameter and the private memeber name is same it will asign the junk value
            //to avoid the issue we can us the this keyword to assign the parameter value to the private member 
            this->branch = branch;
            this->sem = sem;
        }

        void showname(){
            cout<<"your name is "<<name<<endl;
        }

        void showdetails(){
            cout<<"you're from"<<branch<<"branch, and you're studying in "<<sem<<" sem."<<endl;
        }
};

int main(){
    string studentname, studentbranch;    
    int studentsem;

    cout<<"enter your name, branch & sem:";
    cin>>studentname>>studentbranch>>studentsem;

    name name1;
    name1.setname(studentname);
    name1.setdetails(studentbranch,studentsem);
    name1.showname();
    name1.showdetails();
}
