#include<iostream>
using namespace std;

void reverse(char str[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        swap(str[st], str[end]);
        st++;
        end--;
    }

}
int main(){
    // char str[]="hello world";
    char str[100];
    cout<<"enter string : ";
    cin.getline(str, 100);
    cout<<str<<endl;
    reverse(str, strlen(str));
    cout<<str<<endl;

}