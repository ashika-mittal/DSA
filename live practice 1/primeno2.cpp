#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime=true;
    cout<<"enter number: ";
    cin>>n;
    //second approach
    //2 se floor value of(root n) tak check karo bas
    //wahan se factors repeat hone lagte hain
    //basically i dont need to find the large factors
    for(int i=2 ; i*i<=n; i++){ //i*i<=n ->root
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