#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    int sum=0;
    cout<< "enter value of n: ";
    cin>>n;
int ld;
 
    // for (i = n; i>0 ; i--){
    //     ld=n%10;
    //     n=n/10;
    //     sum=sum+ld;
    // }
i=n;
    while(i>0){
        ld=n%10;
        n=n/10;
        sum=sum+ld;
        i--;
    }
    
    cout<<sum<<endl;
    return 0;
}
