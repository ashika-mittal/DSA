#include<iostream>
#include<string>
using namespace std;

class Car {
    public:   
        string name;
        string color;
        int* mileage;

        Car(string name, string color){
            this->name= name;
            this->color = color;
            mileage = new int;   //dynamic allocation
            *mileage = 250;
        }

        //custom copy constructor
        Car(Car &original){
            cout<< "copy original to new ... " <<endl;
            name = original.name;
            color = original.color;
            mileage = new int; 
            *mileage = *original.mileage;
        }

        ~Car(){
            cout<< "object deletion...\n";
            if (mileage != NULL){
                delete mileage;
                mileage= NULL;
            }
        }
};


int main(){
    
    Car c1 ("innova " , "white"); 
    Car c2(c1); //custom copy constructor wll be called.
    cout<< "carname : " <<c1.name <<endl;
    cout<<"car color : " <<c1.color <<endl;
    cout <<"mileage : " <<c1.mileage <<endl;
    cout <<"mileage : " << *c1.mileage <<endl;
}