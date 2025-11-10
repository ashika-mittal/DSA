#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter a number: ";
    cin>>n;
    int temp=n;
    int sum=0;
    int ld;

while(n>0){
    ld=n%10;
    n=n/10;
    sum=sum+ld;
};
cout<<sum;
}