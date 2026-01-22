#include<iostream>
using namespace std;

int power (int x, int n){
    if(n==0){
        return 1;
    }
    int halfpower = power(x, n/2);
    if(n%2==0){
        return halfpower * halfpower;
    }
    else{
        return 2* halfpower * halfpower;
    }
    
}

int main(){
    int x= 2;
    int n=9;
    cout<< power(x,n);
    
}