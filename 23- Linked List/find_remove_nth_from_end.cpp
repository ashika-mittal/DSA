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

        ~Node(){ // destructor
            //cout<<"~Node() called for "<<data<<endl;
            if (next != NULL){
                    delete next; // This will recursively delete the next node in the list, effectively deleting the entire list when the head node is deleted.
                    next = NULL; // Set next to NULL after deleting the next node
                }
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

        ~List(){ // destructor
            //cout<<"~List() called"<<endl;
            if(head != NULL){
                delete head; // This will call the destructor of the Node class for each node in the list, starting from the head. 
                //The destructor will recursively delete all nodes in the list.
                head = NULL; // Set head to NULL after deleting the list
                

            }
            
        }

        void push_front(int val){
            Node* newNode = new Node(val); //dynamically allocate memory for a new node and initialize it with the given value. The new node's next pointer is set to NULL by the constructor of the Node class.
            // create a new node with the given value. The constructor of the Node class initializes the data member with val and sets the next pointer to NULL.
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                newNode->next = head; //
                // *NewNode.next = head; is same as newNode->next = head;
                //  ptr->member is same as (*ptr).member
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
                tail->next = newNode; // This line sets the next pointer of the current tail node to point to the new node. This effectively adds the new node at the end of the list, as it now becomes the last node.
                tail = newNode; // This line updates the tail pointer to point to the new node, making it the new tail of the list.
            }
        }

        void insert (int val, int pos){
            if(pos == 1){
                push_front(val);
                return;
            }
            
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=1; i<pos-1 && temp != NULL; i++){
                temp = temp->next;
            }
            if(temp == NULL){
                cout << "Position out of bounds" << endl;
                return;
            }
            //temp is at pos-1, so we need to insert newNode after temp.
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            Node* temp = head; // Store the current head node in a temporary variable
            head = head->next; // Update the head pointer to point to the next node in the list, effectively removing the first node from the list.
            temp->next = NULL; // Set the next pointer of the removed node to NULL to avoid any potential issues with dangling pointers.
            delete temp; // Deallocate memory for the removed node to prevent memory leaks.
        }

        void pop_back(){
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            if(head->next == NULL){ // Only one node in the list
                delete head;
                head = NULL;
                tail = NULL;
                return;
            }

            Node* temp = head;
            while(temp->next != tail){ // Traverse to the second last node
                temp = temp->next;
            }
            delete tail; // Delete the last node
            tail = temp; // Update tail to the second last node
            tail->next = NULL; // Set the next pointer of the new tail to NULL

            //or without using tail pointer
            /*
            Node* temp = head;
            while(temp->next->next != NULL){ // Traverse to the second last node
                temp = temp->next;
            }
            delete temp->next; // Delete the last node
            temp->next = NULL; // Set the next pointer of the new tail to NULL

            */
        }

        void printList(){
            Node* temp = head; // Start from the head of the list
            while(temp != NULL){ // Traverse until the end of the list
                cout << temp->data << " "; // Print the data of the current node
                temp = temp->next; // Move to the next node
            }
            cout << endl; // Print a new line after printing all nodes
        }

       
        void removeNthFromEnd(int n) {
            if(head == NULL){
                cout << "List is empty" << endl;
                return;
            }
            Node * temp= head;
            int len = 0;
            while(temp != NULL){
                len++;
                temp = temp->next;
            }
            if(n > len){
                cout << "Position out of bounds" << endl;
                return;
            }
            Node * prev = head;
            for(int i=1; i<len-n; i++){
                prev = prev->next;
            }
            Node* toDelete = prev->next; // Store the node to be removed in a temporary variable
            cout << "Node to be removed: " << toDelete->data << endl; // Print the data of the node to be removed
            prev->next = prev->next->next; // Update the next pointer of the previous node to skip the node to be removed
            
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
   
    ll.printList(); 
    ll.removeNthFromEnd(2); // Remove the 2nd node from the end of the list
    ll.printList(); // Print the list after removal
    

}