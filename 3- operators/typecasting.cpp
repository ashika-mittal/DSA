#include<iostream>
using namespace std;
int main(){

    // implicit conversion

    cout<<(10/3) << endl;
    cout<<(10/3.0) << endl;

//ascii values

    cout<<'A'+0 <<endl;
    cout<<'B'+0 <<endl;
    cout<<'a'+0 <<endl;
    cout<<'!'+0 <<endl;
    
    //explicit conversion
    cout<<endl; 

    cout<< (int)'A' <<endl;
    float PI= 3.14;
    cout<< (int)PI <<endl;
    cout<< ((float)10/3) <<endl; //conv 10 to float
    cout<< (char)('A'+1) <<endl; 

}

//bool->char->int->float->double