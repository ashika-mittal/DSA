#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

    //constructor
    Car(){
        cout<<"Constructor is called. Object being created! \n";
    }
    //no return type
    //automatically invoked once when object is created.
    //same name as class


    void start(){
        cout<< "car has started... \n";
    }

    void stop(){
        cout<<"car has stopped \n";
    }


};


int main(){
    Car c1; //object of class Car
    c1.start();
    c1.stop();

}