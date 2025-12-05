#include<iostream>
#include <string>

using namespace std;
int main(){

    string str3;
    getline(cin, str3); 
    cout<<str3<<endl; 

    string str4;
    getline(cin, str4, ',');  //delimiter
    cout<<str4<<endl; 

}