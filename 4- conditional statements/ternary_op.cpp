#include<iostream>
using namespace std;
int main(){
    // variable=condition?statement1:statement2

    bool isAdult;
    int age;

    cout<<"enter age :";
    cin>>age;

   /*
    if(age>=18){
        isAdult=true;
    }
    else{
        isAdult=false;
    }
    */

    isAdult = age>=18 ? true : false;

//largest of 2 numbers;

    int a=6;
    int b=10;

    int largest = a>=b ? a : b;
    cout<<"largest is "<<largest <<endl;

//odd or even

    int num = 13;
    bool isEven = num%2==0 ? true : false;

}