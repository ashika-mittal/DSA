#include<iostream>
using namespace std;

int setithbit (int num, int i){
    int bitmask = 1<<i;

    return(num | bitmask);
}

int main(){
    int num, pos;
    cout<<"enter number: ";
    cin>>num;
    cout<<"enter position: ";
    cin>>pos;
    cout<<setithbit(num,pos) <<endl;
    
}