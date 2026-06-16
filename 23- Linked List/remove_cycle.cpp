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
                tail = NULL; // Set tail to NULL after deleting the list

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

        
        

        void printList(){
            Node* temp = head; // Start from the head of the list
            while(temp != NULL){ // Traverse until the end of the list
                cout << temp->data << " "; // Print the data of the current node
                temp = temp->next; // Move to the next node
            }
            cout << endl; // Print a new line after printing all nodes
        }

       
        bool cycleInLL(){
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next != NULL){
                slow = slow->next; // Move slow pointer by 1 step
                fast = fast->next->next; // Move fast pointer by 2 steps

                if(slow == fast){ // If slow and fast pointers meet, there is a cycle in the linked list
                    return true;
                }
            }
            return false; // If fast pointer reaches the end of the list, there is no cycle
        }

        void removeCycle(Node* head){
            if (head == NULL){
                return; // If the list is empty, there is no cycle to remove
            }

            Node* slow = head;
            Node* fast = head;
            bool cycleExists = false;
            // Step 1: Detect the cycle using Floyd's Tortoise and Hare algorithm
            while (fast!= NULL && fast->next != NULL){
                slow = slow->next; // Move slow pointer by 1 step
                fast = fast->next->next; // Move fast pointer by 2 steps

                if (slow == fast){ 
                    cout << "Cycle detected in the linked list." << endl;
                    cycleExists = true; // If slow and fast pointers meet, there is a cycle in the linked list
                    break;
                }
            }
            
            if (!cycleExists){
                cout << "No cycle detected in the linked list." << endl;
                return; // If there is no cycle, we can exit the function
            }

            // Step 2: Find the starting point of the cycle
            slow = head; // Reset slow pointer to the head of the list
            if(slow==fast){ // If the cycle starts at the head of the list
                while(fast->next != slow){ // Move fast pointer until it reaches the node just before the starting point of the cycle
                    fast = fast->next;
                }
                fast->next = NULL; // Break the cycle by setting the next pointer of the last node in the cycle to NULL
                return;
            }

            Node *prev = NULL; // To keep track of the previous node of fast pointer
            while(slow->next != fast->next){ // Move both slow and fast pointers one step at a time until they meet at the starting point of the cycle
                slow = slow->next;
                prev = fast; // Update the previous node of fast pointer
                fast = fast->next;  
            }
            prev->next = NULL; // Break the cycle by setting the next pointer of the last node in the cycle to NULL



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
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);    
    
    // Create a cycle in the linked list for testing
    ll.tail->next = ll.head;

    ll.removeCycle(ll.head); // Remove the cycle from the linked list
    ll.printList(); // Print the linked list after removing the cycle

    

}