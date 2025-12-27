#include<iostream>
using namespace std;

class Student{
    // propertities/attributes
    string name;
    int age;
    float cgpa;

    // functions/methods
    void getPercentage(){
        cout<< (cgpa * 10) << "%" << endl ;
    }

};

int main(){
    Student s1;
    cout<< sizeof(s1) <<endl;
    
    
    return 0;
}