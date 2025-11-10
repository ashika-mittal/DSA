#include <iostream>
using namespace std;

// even or odd
bool isEven (int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<isEven(num);

    return 0;
}