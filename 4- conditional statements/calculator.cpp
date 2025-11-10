#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter operator: ";
    cin>>op;

    switch(op){
        case '+': cout<<"a + b = " <<(a+b)<<endl;
                break;
        case '-': cout<<"a - b = " <<(a-b)<<endl;
                break;
        case '/': cout<<"a / b = " <<(a/b)<<endl;
                break;
        case '*': cout<<"a * b = " <<(a*b)<<endl;
                break;
        default: cout<<"invalid";
    }
}