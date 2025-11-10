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
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}
