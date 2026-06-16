#include <iostream>

using namespace std;

// create stack using linked list

template<class T>

class Node{
public:
    T data;
    Node * next ;

    Node(T val){
        data= val;
        next = NULL;
    }
};

template<class T>
class Stack {
    Node<T> * head;

public:
    Stack(){
        head = NULL;
    }

    void push(T value) {
        //push_front
        Node<T> * newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        //pop_front
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return;
        }

        Node<T> * temp = head;
        head = head->next;
        delete temp;
    }

    T top(){
        //front
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return T();
        }

        return head->data;
    }

    bool isEmpty() {
        //head==NULL
        return head == NULL;
    }
};

int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout << s.top() << " "; // 1,2,3
        s.pop(); 
        
    }
}
