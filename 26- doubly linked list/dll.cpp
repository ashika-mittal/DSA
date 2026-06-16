#include<iostream>
using namespace std;

//Doubly linked list is a type of linked list in which each node contains a data part and two pointers, one pointing to the next node and the other pointing to the previous node. This allows for traversal in both directions, making it more versatile than a singly linked list.
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() { // constructor
        head = NULL;
        tail = NULL;
    }   

    void push_front(int value) {

        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printListReverse() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        else {
            tail = NULL; // If the list becomes empty after popping the front node, update the tail to NULL
        }
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        }
        else {
            head = NULL; // If the list becomes empty after popping the back node, update the head to NULL
        }
        delete temp;
    }

};

int main() {
    DoublyLinkedList dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_front(0);
    dll.printList(); // Output: 0 1 2 3
    dll.printListReverse(); // Output: 3 2 1 0
    dll.pop_front();
    dll.pop_back();
    dll.printList(); // Output: 1 2
    return 0;
}