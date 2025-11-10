#include<iostream>
using namespace std;

int largest (int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;   
    } else if (b >= c) {
        return b;
    } else {
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter numbers: ";
    cin>>a>>b>>c;
    cout<<largest(a,b,c);
}