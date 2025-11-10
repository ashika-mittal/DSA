#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int i=0;
    int n;
    int flag=0;
    cout<<"enter a number :";
        cin>>n;
        if(n==1){
            cout<<"neither prime nor composite.";
        }
        else{
    for(int i=2;i<=sqrt(n);i++){
if(n%i==0) {
    flag=1;
    break;
    }
    }
    if(flag==1){
        cout<<"composite no.";
    }
    else{
        cout<<"prime no.";
    }
}
    return 0;
}
