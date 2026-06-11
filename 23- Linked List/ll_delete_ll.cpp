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
            cout<<"~Node() called for "<<data<<endl;
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
            cout<<"~List() called"<<endl;
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

        void printList(){
            Node* temp = head; // Start from the head of the list
            while(temp != NULL){ // Traverse until the end of the list
                cout << temp->data << " "; // Print the data of the current node
                temp = temp->next; // Move to the next node
            }
            cout << endl; // Print a new line after printing all nodes
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
    int val, pos;
    cin>>val>>pos;
    ll.insert(val, pos);


    ll.printList(); // This will print the elements of the linked list in order: 50 20 10 30 40 60
    cout<<endl<<"Exiting main function"<<endl<<endl;
}