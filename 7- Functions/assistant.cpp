#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello =)"<<endl;
}
void assistant(){
    sayHello();
    cout<<"Work Done  =)"<<endl;
}
int main(){
    assistant();
    return 0;
} 