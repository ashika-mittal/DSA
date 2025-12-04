#include<iostream>
using namespace std;
int main(){

    //when used cin -> 
    //space ke baad wale char consider nahi hote hain.
    //(ignores all chars after the whitespace.)
    //-> so, cin.getline funtion is used

    char sentence[100];
    cin.getline(sentence, 100);
    cout<<"your text was: " << sentence << endl;
    cout<<"length: "<< strlen(sentence)<< endl;

    

}