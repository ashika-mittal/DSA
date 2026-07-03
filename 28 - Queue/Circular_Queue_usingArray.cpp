#include<iostream>
using namespace std;

class Queue{
    int *arr;


    int capacity;
    int currSize;

    int f, r;

    public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;

        f = 0;
        r = -1;
    }

    void push(int data){
        if(currSize == capacity){
            cout<<"Queue is full \n"<<endl;
            return;
        }

        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;

    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty \n"<<endl;
            return;
        }

        f = (f + 1) % capacity;
        currSize--;

    }

    int front(){
        if(empty()){
            cout<<"Queue is empty \n"<<endl;
            return -1;
        }else{
            return arr[f];
        }
    }

    bool empty(){
        return currSize == 0;
    }

    void display(){
        if(empty()){
            cout<<"Queue is empty \n"<<endl;
            return;
        }

        for(int i = 0; i < currSize; i++){
            cout<<arr[(f + i) % capacity]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl; // 1 2 3 4 
    q.pop(); //2 3 4 
    cout<<q.front()<<endl; // 2 3 4 
    q.push(5); //2 3 4 5
    cout<<q.front()<<endl; // 2 3 4 5 
    q.display(); // 2 3 4 5 
}