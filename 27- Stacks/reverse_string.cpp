#include<iostream>
#include<stack>
#include<string>

using namespace std;

string reverse_string(string str){
    string ans;
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    return ans;
}

void push_at_bottom (stack<int> &s , int val){ //O(n)

    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    push_at_bottom(s, val);
    s.push(temp);
}


void print_stack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();   
    }
    cout<<endl;
}

int main() {

    string str = "abcde";
    cout<< reverse_string(str) <<endl;
    

}