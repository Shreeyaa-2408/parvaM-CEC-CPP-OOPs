#include<iostream> 
using namespace std;

class Car{
    //date
    public:
    string brand,model,variant,fule_type;
    int year;
    float price;

    //member function
    void start(){
        cout<< model<<"started!"<<endl;

    }

    void park(){
        cout<<model<<"parked!"<<endl;

    }
    void stop(){
        cout<<model<<"stopped!"<<endl;
    }

    void display(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"variant:"<<variant<<endl;
        cout<<"fule type:"<<fule_type<<endl;
        cout<<"lanch year:"<<year<<endl;
        cout<<"price:"<<price<<endl;

    }
};
int main(){
    Car c1;//object created for the class car
    c1.brand="toyato";
    c1.model="Innova";
    c1.variant="6 Seater";
    c1.year=2024;
    c1.price=15,000,000;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}