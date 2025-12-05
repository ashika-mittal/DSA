#include<iostream>
using namespace std;

bool palindrome(char str[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        if(str[st]!=str[end]){
            cout<<"not a palindrome. ";
            return false;
        }
        st++;
        end--;
    }
    cout<<"palindrome.";
    return true;
}

int main(){
    // char str[]="hello world";
    char str[100];
    cout<<"enter string : ";
    cin.getline(str, 100);
    palindrome(str, strlen(str));
   

}