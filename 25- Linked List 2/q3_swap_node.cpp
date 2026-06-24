#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    ~List() {
        if (head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
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

    Node* swapNodes(Node* head, int x, int y) {

        if (x == y)
            return head;

        Node* prevX = NULL;
        Node* currX = head;

        while (currX != NULL && currX->data != x) {
            prevX = currX;
            currX = currX->next;
        }

        Node* prevY = NULL;
        Node* currY = head;

        while (currY != NULL && currY->data != y) {
            prevY = currY;
            currY = currY->next;
        }

        if (currX == NULL || currY == NULL)
            return head;

        if (prevX != NULL)
            prevX->next = currY;
        else
            head = currY;

        if (prevY != NULL)
            prevY->next = currX;
        else
            head = currX;

        Node* temp = currX->next;
        currX->next = currY->next;
        currY->next = temp;

        return head;
    }
};

int main() {

    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    cout << "Original List: ";
    ll.printList();

    ll.head = ll.swapNodes(ll.head, 2, 4);

    cout << "After Swapping 2 and 4: ";
    ll.printList();

    return 0;
}