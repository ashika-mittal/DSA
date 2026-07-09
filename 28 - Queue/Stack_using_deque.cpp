#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int> deq;

    public:
        void push(int data){
            deq.push_front(data);
        }

        void pop(){
            if(deq.empty()){
                cout<<"Stack is empty \n"<<endl;
                return;
            }
            deq.pop_front();
        }

        int top(){
            if(deq.empty()){
                cout<<"Stack is empty \n"<<endl;
                return -1;
            }else{
                return deq.front();
            }
        }

        bool empty(){
            return deq.empty();
        }
};

int main(){
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    for (int i = 0; i < 3; i++){
        cout<< s.top() << " ";
        s.pop();
    }

    return 0;
}

