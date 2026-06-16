#include<iostream>
#include<list> // Include the list header for using the STL list container
#include<iterator> // Include the iterator header for using iterators with STL containers

using namespace std;

int main(){
    list<int> ll; // Create a list of integers using the STL list container
    
    ll.push_front(2); //2
    ll.push_front(1); //1 2
    ll.push_back(3); //1 2 3
    ll.push_back(4); //1 2 3 4
    ll.push_back(5); //1 2 3 4 5

    // Print the elements of the list using an iterator
    cout << "Elements in the list: ";
    list<int>::iterator itr; // Declare an iterator for the list of integers
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout << *itr << " "; // Dereference the iterator to get the value of the current element
    }
    cout << endl;
    return 0;
}