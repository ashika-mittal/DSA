#include<iostream>
#include<stack>
using namespace std;

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

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    

   print_stack(s);

   push_at_bottom(s,33);
   print_stack(s);

}