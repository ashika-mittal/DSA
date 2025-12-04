#include<iostream>
using namespace std;
int main(){

    char word[30];
    cin>>word;
    cout<<"your word was: " <<word << endl;
    cout<<"length: "<< strlen(word)<< endl;

    //when used cin -> 
    //space ke baad wale char consider nahi hote hain.
    //(ignores all chars after the whitespace.)
    //-> so, cin.getline funtion is used


}