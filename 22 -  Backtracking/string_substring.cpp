#include<iostream>
#include <vector>
using namespace std;    

int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    
    cout << str.substr(0, 3) << endl; // returns substring starting from index 0 and of length 3
    cout << str.substr(2) << endl; // returns substring starting from index 2 till the end of the string
    cout << str.substr(1, 4) << endl; // returns substring starting from index 1 and of length 4
    return 0;
}