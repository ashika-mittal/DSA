#include<iostream>
using namespace std;

bool powerof2(int n){
    if(!(n & (n-1))){
        return true;
    }else{
        return false;   
    }
}

int main(){
    int num, pos;
    cout<<"enter number: ";
    cin>>num;
    cout << powerof2(num) <<endl;
    
}