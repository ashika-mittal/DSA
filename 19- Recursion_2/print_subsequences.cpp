#include<iostream>
using namespace std;

void printSubsequences(string str, int i, string output){
    if(i==str.length()){
        cout<<output<<endl;
        return;
    }
     //include
    printSubsequences(str, i+1, output + str[i]);
    //exclude
    printSubsequences(str, i+1, output);

   
}

int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    cout<<"subsequences of "<<str<<" are : \n";
    printSubsequences(str, 0, "");
    return 0;
}