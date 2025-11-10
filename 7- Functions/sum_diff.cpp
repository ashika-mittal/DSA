#include <iostream>
using namespace std;


int sum (int a, int b){// a, b are parameters
    int sum = a + b;
    return sum;
}

int diff (int a, int b){// a, b are parameters
    int sum = a - b;
    return sum;
}

int main(){
    int s= sum(2,4); //2,4 are arguments
    cout << "sum = " << s << endl;

    int d= diff(9,4); //2,4 are arguments
    cout << "diff = " << d << endl;

    return 0;
}

//default parameters:
// Default parameters (also called default arguments) are values 
//that a function automatically uses when no value is provided for a 
//particular parameter during a function call. ->only used when value not given .
//eg
//int sum (int a, int b = 1){
//     int sum = a + b;
//     return sum;
// } -->here b=1 is default parameter 