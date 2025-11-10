#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    int sum =0;
    cout<< "enter value of n: ";
    cin>>n;
    cout<<endl;
    for (i = 1; i<=n ; i++){
        sum=sum+i;
    }
    
    cout<<sum<<endl;
    return 0;
}

