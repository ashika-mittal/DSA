#include<iostream>
using namespace std;


int fact(int n){
    int fact =1;
    for (int i = 1; i<=n ; i++){
        fact=fact*i;
    }
    return fact;
    
}

int main(){
    int n,r;
    cout<<"enter n: ";
    cin>>n;
     cout<<"enter r: ";
    cin>>r;
    cout<<fact(n)/(fact(r)*fact(n-r))<<endl;
    return 0;
}
