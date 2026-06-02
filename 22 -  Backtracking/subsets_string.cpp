#include<iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> ans;

void solve(string str, int i, string output){

    if(i == str.length()) {
        ans.push_back(output);
        return;
    }

    //include
    solve(str, i + 1, output + str[i]);

    // exclude
    solve(str, i + 1, output);
}

int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
   
    solve(str, 0, "");

   for(string s : ans) {
        cout << s << endl;
    }

    return 0;
} 