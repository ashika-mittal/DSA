#include<iostream>
#include <string>

using namespace std;
int main(){

    string str1 = "hello world";
    cout<<str1<<endl;

    for(int i = 0; i<str1.length(); i++){    //dot operator -> to access member funcns
        cout<<str1[i]<< "-";
    }
    cout<<endl<<endl;

    //for each
    for(char ch : str1){
        cout<<ch <<",";
    }
    cout<<endl<<endl;
    

}