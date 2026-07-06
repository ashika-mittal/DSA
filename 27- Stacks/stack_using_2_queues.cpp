#include<iostream>
#include<queue>
using namespace std;

class Stack{
    queue<int> q1, q2;

    public:
        void push(int data){
            q1.push(data);
        }

        void pop(){
            if(q1.empty()){
                cout<<"Stack is empty \n"<<endl;
                return;
            }

            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }

            q1.pop();

            swap(q1, q2);
        }

        int top(){
            if(q1.empty()){
                cout<<"Stack is empty \n"<<endl;
                return -1;
            }

            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }

            int ans = q1.front();
            q2.push(ans);
            q1.pop();

            swap(q1, q2);

            return ans;
        }

        bool empty(){
            return q1.empty();
        }
};

int main(){

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}