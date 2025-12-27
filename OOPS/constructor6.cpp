#include<iostream>
#include<string>
using namespace std;

class Car {
    public:   
        string name;
        string color;

        Car(string name, string color){
            this->name= name;
            this->color = color;
        }
};


int main(){
  
    Car c1 ("innova " , "white"); 
    Car c2 (c1); 

    cout<< "carname : " <<c1.name <<endl;
    cout<<"car color : " <<c1.color <<endl;
    
    cout<< "carname : " << c2.name <<endl;
    cout<<"car color : " << c2.color <<endl;
    

}