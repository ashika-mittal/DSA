// for(initialisation ; condition ; updation) { work }

//scope of variable defined in loop is till the loop itself

#include<iostream>
using namespace std;
int main(){
    int num;
    for (num = 0; num<=5 ; num++){
        cout << num <<" ";
    }
    cout <<endl;
    cout<<"last value of num is "<<num;
    cout<<endl;
    return 0;
}

//infinite loop -> stoppping cond always true ->there should never be an infinite loop in ur code.