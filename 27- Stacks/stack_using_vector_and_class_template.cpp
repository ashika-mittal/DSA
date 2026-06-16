#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class Stack {
    vector<T> v; // Vector to store the elements of the stack
    public:
        void push(T data) {
            v.push_back(data); // Add an element to the top of the stack
        }   

        void pop() {
            if (v.empty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            v.pop_back(); // Remove the top element from the stack
        }

        T top() {
            if (v.empty()) {
                cout << "Stack is empty" << endl;
                return T(); // Return default value of type T to indicate that the stack is empty
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
    Stack<string> s; // Create a stack of integers using the Stack class template
    
    s.push("arjun");
    s.push("ashika");
    s.push("ankurika");
    s.push("ashwani");

    while(!s.isEmpty()){
        cout << s.top() << endl; // Print the top element of the stack
        s.pop(); // Remove the top element from the stack
    }
}