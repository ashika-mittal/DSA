#include<iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout<<" parent class show...." <<endl;
        }
};

class Child : public Parent{
    public:
        void show(){
            cout<<" child class show...." <<endl;
        }
};

int main(){
    Child c1;
    c1.show();
}



//diff b/w method overload and overriding:

// -method overloading is complile time polymorphism
// -method overriding is run time polymorphism

// - method overloading : both functions are under the same class -no  of arguments / return type differs
// - method overriding : INHERITENCE -> Parent and child have the functions having same name.