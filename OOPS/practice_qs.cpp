// Create a User class with properties : id (private), username (public) & password (private).

// Its id should be initialized in a parameterised constructor.

// It should have a Getter & Setter for password.

#include<iostream>
#include<string>
using namespace std;


class User{
    int id;
    string pswd;

public:
    string username;

    User(int id){
        this->id = id;
    }

    //getter and setter for pswd
    string getPswd(){
        return pswd;
    }

    void setPswd(string pswd){
        this->pswd=pswd;
    }
};

int main(){
    
    User u1 (101);
    u1.username = "ashika_mittal";
    u1.setPswd("xyz@123");

    cout<< "username : "<<u1.username <<endl;  //since public : direct access
    cout <<"pswd : "<<u1.getPswd() <<endl; //private : have to use getter

}