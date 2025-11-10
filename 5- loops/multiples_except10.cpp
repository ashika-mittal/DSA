#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    do{
        cout<< "enter a number :";
        cin>>n;
        if(n % 10 == 0){
           break;
        }
        
    } while(1);
    return 0;
}
