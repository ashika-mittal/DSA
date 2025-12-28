#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

    public:
        Car(string name, string color){
            this->name= name;
            this->color = color;
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
    
    Car c1 ("innova " , "white"); 
    Car c2 (c1); 
    cout<< "carname : " <<c1.getName() <<endl;
    cout<<"car color : " <<c1.getColor() <<endl;
    cout<< "carname : " <<c2.getName() <<endl;
    cout<<"car color : " <<c2.getColor() <<endl;
    
}