#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> v; // Vector to store the elements of the stack
    public:
        void push(int data) {
            v.push_back(data); // Add an element to the top of the stack
        }

        void pop() {
            if (v.empty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            v.pop_back(); // Remove the top element from the stack
        }

        int top() {
            if (v.empty()) {
                cout << "Stack is empty" << endl;
                return -1; // Return -1 to indicate that the stack is empty
            }
            //return v.back(); // Return the top element of the stack
            //or
            int LastIndex = v.size() - 1; 
            return v[LastIndex];
        }

        bool isEmpty() {
            return v.size() == 0; 
        }

    };


int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout << s.top() << " "; // Print the top element of the stack
        s.pop(); // Remove the top element from the stack
    }
}