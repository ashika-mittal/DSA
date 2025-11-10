#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello =)"<<endl;
}

int main(){
    sayHello();
    return 0;
}

//forward declaration : when decrared pehle (before main- so that call karne mein issue na ho)
//but defined aaram se kardo- jab marzi

//eg 
// void sayHello();
//& now main ke baad baaki likhdo
// void sayHello(){
//     cout<<"Hello =)"<<endl;
// }