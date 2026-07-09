#include<iostream>
#include<deque>
using namespace std;

class Queue{
    deque<int> deq;

    public:
        void push(int data){
            deq.push_back(data);
        }

        void pop(){
            if(deq.empty()){
                cout<<"Queue is empty \n"<<endl;
                return;
            }
            deq.pop_front();
        }

        int front(){
            if(deq.empty()){
                cout<<"Queue is empty \n"<<endl;
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
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    for (int i = 0; i < 3; i++){
        cout<< q.front() << " ";
        q.pop();
    }

    return 0;


}