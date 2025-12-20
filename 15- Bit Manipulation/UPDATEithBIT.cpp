#include<iostream>
using namespace std;

int updateithbit (int num, int i, int val){
    //1. clear ith bit
    num = num & (~(1<<i));
    //2. set acc to val
    num= num | (val<<i);
    return num;
}

int main(){
    int num, pos, val;
    cout<<"enter number: ";
    cin>>num;
    cout<<"enter position: ";
    cin>>pos;
    cout<<"enter value: ";
    cin>>val;
    cout<< updateithbit(num, pos, val);
    
}