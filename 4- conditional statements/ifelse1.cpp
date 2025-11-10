#include<iostream>
using namespace std;
int main(){
    cout<<"enter age: ";
    int age;
    cin>>age;
    
    if(age>=18) {
        cout<<"can vote";
    }
    else{
        cout<<"cannot vote";
    }
}
