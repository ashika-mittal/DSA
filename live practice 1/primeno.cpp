#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime=true;
    cout<<"enter number: ";
    cin>>n;
    for(int i=2 ; i<n; i++){
        if(n%i==0){
            isprime=false;
        }
    }

    if(isprime){
        cout<<"entered number is a prime number.";
    }
    else{
        cout<<"entered number is not a prime number.";
    }
}