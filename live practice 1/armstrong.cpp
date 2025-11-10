#include<iostream>
#include<math.h>
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
    sum=sum+pow(ld,3);
};
cout<<sum<<endl;;
if(temp==sum) cout<<"entered number is an armstrong number.";
else cout<<"entered number is not an armstrong number.";
}