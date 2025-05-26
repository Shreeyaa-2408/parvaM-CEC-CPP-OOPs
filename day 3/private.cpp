#include<iostream>
using namespace std;

class company{
    private:
        string cin;
        int totalworth;
    public:
        string gstNum,location;
        int numofemp;

        //setter method 
        void setdetails(string cinNum,int worth){
            cin=cinNum;
            totalworth=worth;
        }

        //getter method
        void getdetails(string gstNumder){
            cout<<"coperate identify number:"<<cin<<endl;
            cout<<"total worth of the company:"<<totalworth<<endl;
        }

        void getBasicDetails();
};
void company::getBasicDetails(){
    cout<<"GST Number:"<<gstNum<<endl;
    cout<<"location:"<<location<<endl;
    cout<<"Number of employees:"<<numofemp<<endl;
}
int main(){
    company comp1;
    comp1.gstNum="123455NM43MK34";
    comp1.location="Bengluru";
    comp1.numofemp=50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyworth;

    cinNumber="1NIEJ3KDEMDC355";
    companyworth=500000;

    comp1.setdetails(cinNumber,companyworth);
    comp1.getdetails("comp1.gstNum");
}