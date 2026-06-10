#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){ // constructor
            data = val;
            next = NULL;
        }
};

class List {
    public:
        Node* head;
        Node* tail;

        List(){ // constructor
            head = NULL;
            tail = NULL;
        }

}

int main(){
    //Linked List is a linear data structure where each element is a separate object. 
    //Each element (node) of a list is comprising of two items - the data and a reference to the next node. 
    //The last node has a reference to null.
    // The entry point into a linked list is called the head of the list. 
    //It should be noted that head is not a separate node, but the reference to the first node. 
    //If the list is empty then the head is a null reference.

    
}