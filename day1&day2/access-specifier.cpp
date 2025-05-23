#include<iostream>
using namespace std;

class bank{
    private:
        int balance=0;
    public:
        //member data of the class
        string custname, custEmail;
        int acNumber;

        void createAccount(string cName, string cEmail){
            custname=cName;
            custEmail=cEmail;
        }

        void displayInfo(){
            cout<<"customer name:"<<custname<<endl;
            cout<<"customer email:"<<custEmail<<endl;
        }
        //setter
        void addBalance(int account,int amount){
            balance += amount;
            cout<<"the amount has been deposited successfully!";
        }
        //setter
        void withdrawnAmount(int account,int amount){
            balance-=amount;
            cout<<"the amount has been withdrawn successfully!";
        }
        //getter
        void checkBalance(){
            cout<<"bank balance:"<<balance<<endl;
        }
};

int main(){
    bank cust1;//object declared
    string name,email;
    int acNum,amount;
    //we can assign the value to the public number
    // cust1.balance=8000// we can't assign the value to the private member
    cout<<"enter your name:";
    cin>>name;
    cout<<"enetr your email id:";
    cin>>email;
    cout<<"enetr your account number:";
    cin>>acNum;
    cout<<"enetr your amount to be deposited:";
    cin>>amount;

    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNum,amount);
    cust1.checkBalance();

    cout<<"enter your amount to be withdrawn:";
    cin>>amount;
    cust1.withdrawnAmount(acNum,amount);
    cust1.checkBalance();
}