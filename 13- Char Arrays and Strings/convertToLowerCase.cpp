#include<iostream>
using namespace std;

void toLower(char str[], int n){
    for(int i=0;i<n;i++){
        char ch = str[i];
        if(ch>='a' && ch<='z'){ //lowercase
            continue;
        }
        else{ //uppercase
            str[i]= ch-'A' + 'a';
        }

    }

}

int main(){
    char str[]= "ApPle";
    toLower(str, strlen(str));

    cout<<str<<endl;
    return 0;

}