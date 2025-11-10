#include<iostream>
using namespace std;
int main(){
    //nth term
    //first n terms
    //0,1,1,2,3,5,8,13,21,34...

    //FIRST=0;
    //SECOND=1;
    //THIRD=SECOND+FIRST;
int first=0;
int second=1;
int n;
int third;
cout<<"enter the value of n: ";
cin>>n;
for(int i=2; i<=n;i++){
third=first+second;
first=second;
second=third;

}
cout<<n<<" term in fibonacci series is "<<third;
}