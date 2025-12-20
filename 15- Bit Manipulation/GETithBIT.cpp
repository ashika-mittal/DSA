#include<iostream>
using namespace std;

int getithbit (int num, int i){
    int bitmask = 1<<i;

    if(!(num & bitmask)){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int num, pos;
    cout<<"enter number: ";
    cin>>num;
    cout<<"enter position: ";
    cin>>pos;
    cout<<getithbit(num,pos) <<endl;
    
}