#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

    //constructor
    Car(string name, string color){
        
        cout<<"Constructor is called. Object being created! \n";
        this->name= name;
        this->color = color;
    }
        //this is a spcl pointer in cpp that points to the current object.
    //this->property 
    // *(this).property



    void start(){
        cout<< "car has started... \n";
    }

    void stop(){
        cout<<"car has stopped \n";
    }

    //getters
    string getName (){
        return name;
    }

    string getColor(){
        return color;
    }


};


int main(){
    Car c1 ("innova " , "white"); //object of class Car
    cout<< "carname : " <<c1.getName() <<endl;
    cout<<"car color : " <<c1.getColor() <<endl;
    c1.start();
    c1.stop();

}