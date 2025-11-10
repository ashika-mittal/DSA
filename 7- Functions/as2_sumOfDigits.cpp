#include<iostream>
using namespace std;

int sum(int n){
    int s=0;
    int ld;
    while(n>0){
        ld=n%10;
        s=s+ld;   
        n=n/10; 
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sum(n);
}