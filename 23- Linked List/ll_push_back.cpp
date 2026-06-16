#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){  // constructor
            data = val;
            next = NULL;
        }
};

class List {
    public:
        Node* head;
        Node* tail;

        List(){   // constructor
            head = NULL;
            tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);  //dynamically allocate memory for a new node and initialize it with the given value. The new node's next pointer is set to NULL by the constructor of the Node class.
            // create a new node with the given value. The constructor of the Node class initializes the data member with val and sets the next pointer to NULL.
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                newNode->next = head; //
                // *NewNode.next = head; is same as newNode->next = head;
                // ptr->member is same as (*ptr).member
                // This line sets the next pointer of the new node to point to the current head of the list. This effectively inserts the new node at the front of the list, as it now points to the previous first node.
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;  // This line sets the next pointer of the current tail node to point to the new node. This effectively adds the new node at the end of the list, as it now becomes the last node.
                tail = newNode;  // This line updates the tail pointer to point to the new node, making it the new tail of the list.
            }
        }

        
};

int main(){
    //Linked List is a linear data structure where each element is a separate object. 
    //Each element (node) of a list is comprising of two items - the data and a reference to the next node. 
    //The last node has a reference to null.
    // The entry point into a linked list is called the head of the list. 
    //It should be noted that head is not a separate node, but the reference to the first node. 
    //If the list is empty then the head is a null reference.


    List ll;
    ll.push_front(10);
    ll.push_front(20);  
    ll.push_back(30);   
    ll.push_back(40);
    ll.push_front(50);
    ll.push_back(60);
}