// Function Overloading
// Multiple functions with the same name but different parameters or no. of parameters.
//return type se farak nahi padta funcn ke. Only PARAMETERS- type/number

#include <iostream>
using namespace std;


int sum(int a, int b) {
    cout <<(a+b)<< endl;
    return a + b;
}


double sum (double a, double b){
    cout <<(a+b)<< endl; 
    return a + b;
}

int sum(int a, int b, int c) {
    cout <<(a+b+c)<< endl;
    return a + b + c;
}


int main() {
    sum (2, 3);
    sum (12, 13);
    sum (1.5, 2.5); //4
    sum(3,5,6);
 

    return 0;
}