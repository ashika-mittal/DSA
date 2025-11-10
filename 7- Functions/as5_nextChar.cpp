#include<iostream>
using namespace std;

char nextch(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    else{
        return ch + 1;
    }

}

int main(){
    char c;
    cout<<"Enter character: ";
    cin>>c;
    cout<<nextch(c);
}