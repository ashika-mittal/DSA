#include<iostream>
#include <string>

using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        cout<<"not a valid anagram.";
        return false;
    }
    int count[26]= {0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }

    for(int i=0; i<t.length(); i++){
        if(count[t[i]-'a']==0){
            cout<<"not a valid anagram.";
            return false;
        }
        count[t[i]-'a']--;
    }
    
    cout<<"valid anagram.";
    return true;

}

int main(){
    // string s = "the eyes";
    // string t= "they see";

    string s = "cats";
    string t= "dogs";
    isAnagram(s,t);
}