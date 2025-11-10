#include<iostream>
using namespace std;
int main(){
    //binary->need two operands
   

    int a =5;
    int b =3;

    cout<< "+   " << (a+b) <<endl;
    cout<< "-   " << (a-b) <<endl;
    cout<< "/   " << (a/b) <<endl;
    cout<< "*   " << (a*b) <<endl;
    cout<< "%   " << (a%b) <<endl;

    // unary-> need one operand
    //2 types: pre & post
     cout<<endl<<endl;

int x=10;
x++; //x= x+1 
cout<<x << endl; 
x--; //x=x-1;
cout<< x << endl; 

}