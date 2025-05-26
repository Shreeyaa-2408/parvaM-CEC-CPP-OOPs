#include<iostream>
using namespace std;
class customer{
    public:
        string firstName,lastName;
        int age,rating;
        
        //intialize the constructor
        customer(){
            firstName="shreeyaa";
            lastName="g";
            age = 19;
            rating=5;
        }
        void showDetails(){
            cout<<"custimer Name:"<<firstName<<""<<lastName<<endl;
            cout<<"customer Age:"<<age<<endl;
        }
        void giveRating(int rate);

        void showRating(){
            cout<<"you've give"<<rating <<"star rating. thank you!"<<endl;
        }
};
void customer::giveRating(int rate){
    rating= rate;
}
int main(){
    customer cust1;

    cust1.showDetails();
    cust1.showRating();

    customer cust2;

    cust2.firstName="shreeyaa";
    cust2.lastName="g";
    cust2.age=30;

    int starRating;

    cout<<"give your rating(0 to 5):";
    cin>>starRating;
    cust2.giveRating(starRating);
    cust2.showRating();

}