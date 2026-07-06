#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1, s2;

    public:
        void push(int data){
            s1.push(data);
        }

        void pop(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue is empty \n"<<endl;
                return;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            s2.pop();
        }

        int front(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue is empty \n"<<endl;
                return -1;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            return s2.top();
        }

        bool empty(){
            return s1.empty() && s2.empty();
        }
};
int main(){
    
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Size of queue: "<<q.empty()<<endl;

    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
    cout<<"Size of queue after pop: "<<q.empty()<<endl;

    return 0;
}