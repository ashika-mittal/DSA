#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    int fact =1;
    cout<< "enter value of n: ";
    cin>>n;
    cout<<endl;
    for (i = 1; i<=n ; i++){
        fact=fact*i;
    }
    
    cout<<fact<<endl;
    return 0;
}

