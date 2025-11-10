#include<iostream>
using namespace std;

int rev(int n){
    int ld,r;
    r=0;
    while(n>0){
        ld=n%10;
        n=n/10;
        r=r*10 + ld;
    }
    return r;

}

bool isPalindrome(int n){
    if (rev(n)==n){
        return true;
    } else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<isPalindrome(n);
}