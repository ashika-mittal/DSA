#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;

void solve(string str, string output) {
    // base case
    if (str.length() == 0) {
        ans.push_back(output);
        return;
    }

    // iterate through the string and for each character, 
    // remove it and make a recursive call with the remaining string
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // remaining string after removing the character at index i
        //eg. if str="abcdefgh" and i=2 then ch='c' 
        // and remaining string will be "ab" + "defgh" = "abdefgh"
        string left = str.substr(0, i);
        string right = str.substr(i + 1);

        string remaining = left + right;

        // recursive call with the remaining string and the output string appended with the current character
        solve(remaining, output + ch);
    }
}

int main() {
    string str;
    cin >> str;

    solve(str, "");

    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}