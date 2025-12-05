#include<iostream>
#include <string>

using namespace std;
int main(){

    string str = "Hello world";
    cout<<str<<endl;

    cout<<str.length() <<endl;

    cout<<str.at(3) <<endl;

    cout<< str.substr(1,6) <<endl;

    string s= "I love c++ and java.";
    cout<< s.find("c++")<<endl;

    string s1= "I love c++ and c++ is fun.";
    cout<< s1.find("c++", 12)<<endl;
    cout<< s1.find("python")<<endl;
    cout<< (int)s1.find("python")<<endl;

    

}