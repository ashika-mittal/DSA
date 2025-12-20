#include<iostream>
using namespace std;


int countsetbits (int num){
    //sum of all digits of binary number

    int count =0;
    while(num>0){
        int lastdig = num & 1;
        count = count + lastdig;
        num = num>>1;
    }
    return count;
}

int main(){
    int num, pos;
    cout<<"enter number: ";
    cin>>num;
    cout<<countsetbits(num) <<endl;
}