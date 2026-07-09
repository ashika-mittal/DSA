#include<iostream>
#include<deque>
using namespace std;

// deque = double ended queue -> data structure that allows insertion and deletion from both ends

int main(){

    deque<int> deq;

    deq.push_front(2);
    deq.push_front(1);
    deq.push_back(3);
    deq.push_back(4);

    //1 2 3 4
    
    cout<<"Front element: "<<deq.front()<<endl;
    cout<<"Back element: "<<deq.back()<<endl;

    deq.pop_front();
    cout<<"Front element after pop: "<<deq.front()<<endl;

    deq.pop_back();
    cout<<"Back element after pop: "<<deq.back()<<endl;

    return 0;
}
