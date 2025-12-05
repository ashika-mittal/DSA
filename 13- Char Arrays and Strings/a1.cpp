#include<iostream>
#include <string>

using namespace std;

int vowelCount(string s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s;
    getline(cin, s);
    cout<< vowelCount(s) <<endl;
}