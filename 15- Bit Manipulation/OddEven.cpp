#include<iostream>
using namespace std;

void OddEven(int n){
    if (n&1){
        cout<<"odd number";
    }
    else{
        cout<<"even number";
    }
}

int main(){
    int n;
    cin>>n;
    OddEven(n);
}