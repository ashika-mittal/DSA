# include<iostream>
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
                // This line sets the next pointer of the new node to point to the current head of  the list. This effectively inserts the new node at the front of the list, as it now points to the previous first node.
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

        void printList(){
            Node* temp = head; // Start from the head of the list
            while(temp != NULL){ // Traverse until the end of the list
                cout << temp->data << " "; // Print the data of the current node
                temp = temp->next; // Move to the next node
            }
            cout << endl; // Print a new line after printing all nodes
        }

        Node* SplitAtMid(Node* head){
            if(head == NULL || head->next == NULL){
                return head; // If the list is empty or has only one node, return the head as the middle
            }

            Node* slow = head; 
            Node* fast = head;
            Node* prev = NULL; // To keep track of the previous node of slow pointer

            while(fast != NULL && fast->next != NULL){ 
                prev = slow; // Update the previous node of slow pointer
                slow = slow->next; 
                fast = fast->next->next; 
            }
            if(prev != NULL){
                prev->next = NULL; // split
            }
            return slow; // head of the right 
        }

        Node *merge(Node* left, Node* right){
            List ans;
            Node* i = left;
            Node* j = right;

            if(left == NULL) return right; // If the left list is empty, return the right list
            if(right == NULL) return left; // If the right list is empty, return the left list

            while(i!=NULL && j!=NULL){
                if(i->data < j->data){
                    ans.push_back(i->data);
                    i = i->next;
                }
                else{
                    ans.push_back(j->data);
                    j = j->next;
                }   
                
            }

            while(i!=NULL){
                ans.push_back(i->data);
                i = i->next;
            }
            while(j!=NULL){
                ans.push_back(j->data);
                j = j->next;
            }
            return ans.head;
        }

        Node *MergeSort(Node* head){

            if(head == NULL || head->next == NULL){
                return head; // Base case: if the list is empty or has only one node, it is already sorted
            }


            Node * rightHead = SplitAtMid(head); // Split the list into two halves

            Node * leftHead = MergeSort(head); // Recursively sort the first half
            rightHead = MergeSort(rightHead); // Recursively sort the second half

            return merge(leftHead, rightHead); // Merge the two sorted halves
        }

    };

    int main(){
        //Linked List is a linear data structure where each element is a separate object. 
        //Each element (node) of a list is comprising of two items - the data and      a reference to the next node.    
        //The last node has a reference to null.
        // The entry point into a linked list is called the head of the list.
        //It should be noted that head is not a separate node, but the reference to the first node.
        //If the list is empty then the head is a null reference.

        List ll;
        ll.push_front(10);
        ll.push_front(55);
        ll.push_front(20);
        ll.push_front(5);
        ll.push_back(30);  
        ll.push_back(30);
        ll.push_back(40);
        ll.push_back(23);
        ll.push_back(31);
        ll.push_back(1);
        ll.push_back(100);
        ll.push_back(0);
        ll.push_back(2);
        ll.push_back(3);
        ll.printList(); // Print the elements of the linked list    

        ll.head = ll.MergeSort(ll.head); // Sort the linked list using merge sort
        ll.printList(); // Print the sorted linked list
        return 0;

    }
