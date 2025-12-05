#include<iostream>
using namespace std;

void toUpper(char str[], int n){
    for(int i=0;i<n;i++){
        char ch = str[i];
        if(ch>='A' && ch<='Z'){ //uppercase
            continue;
        }
        else{ //lowercase
            str[i]= ch-'a' + 'A';
        }

    }

}

int main(){
    char str[]= "ApPle";
    toUpper(str, strlen(str));

    cout<<str<<endl;
    return 0;

}