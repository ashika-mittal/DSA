#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

    //not parametrized constructor :DEFAULT 
    Car(){
        cout<<"Constructor without parameter. constructor is called. Object being created! \n";
    }

    //parametrized constructor
    Car(string name, string color){
        cout<<"Constructor with parameters. Constructor is called. Object being created! \n";
        this->name= name;
        this->color = color;
    }
        
//this is called CONSTRUCTOR OVERLOADING->
//when name is same but parameter diff.


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
    Car c0; //non-parametrized (default) constructor will be called
    Car c1 ("innova " , "white"); //parameterized constructor will be called
    Car c2 ("maruti 800 " , "grey"); //parameterized constructor will be called again
    cout<< "carname : " <<c1.getName() <<endl;
    cout<<"car color : " <<c1.getColor() <<endl;
    c1.start();
    c1.stop();

}