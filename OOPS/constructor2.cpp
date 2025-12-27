#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

    //constructor
    Car(string nameVal, string colorVal){
        
        cout<<"Constructor is called. Object being created! \n";
        name= nameVal;
        color= colorVal;
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