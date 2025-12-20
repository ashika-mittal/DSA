#include<iostream>
using namespace std;

int getithbit (int x, int n){
    int ans=1;
    
    while(n>0){
        int ld= n & 1;
        if(ld){
            ans=ans*x;
        }

        x= x*x;
        n= n>>1;
    }
    return ans;
}

int main(){
    int x, n;
    cout<<"enter number: ";
    cin>>x;
    cout<<"enter power: ";
    cin>>n;
    cout<<getithbit(x,n) <<endl;
    
}