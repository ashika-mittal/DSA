#include<iostream>
using namespace std;
//Q1 asn
int clearbitsinrange (int num, int i, int j){
    int a = (~0) << (j+1);
    int b = (1 << i) -1;
    int mask = a|b;
    num = num & mask;
    return num;
}

int main(){
    int num, i, j;
    cout<<"enter number: ";
    cin>>num;
    cout<<"enter first position (from): ";
    cin>>i;
    cout<<"enter second position (to): ";
    cin>>j;
    cout<< clearbitsinrange(num, i, j);
    
}