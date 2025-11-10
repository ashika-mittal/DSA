#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    int rev=0;
    cout<< "enter value of n: ";
    cin>>n;
int ld;
 
  while(n>0){
    ld=n%10;
rev = rev*10 +ld;
    n=n/10;
   
    
  }
cout<<rev<<endl;

    return 0;
}
