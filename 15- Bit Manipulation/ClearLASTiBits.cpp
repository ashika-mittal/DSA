#include<iostream>
using namespace std;

int clearlastibits (int num, int i){
    int mask = (~0) << i;
    return (num & mask);
}

int main(){
    int num, i;
    cout<<"enter number: ";
    cin>>num;
    cout<<"enter last number of bits: ";
    cin>>i;
    cout<<clearlastibits(num,i) <<endl;
    
}