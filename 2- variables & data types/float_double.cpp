#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float pi=3.14159265359;
    double pi2=3.14159265359;
    //cout has default limit of 5 decimal
    cout<<pi<<endl<<pi2;
    cout<<endl<<endl;

    cout<<setprecision(12)<<pi<<endl; //random values after the limit of float
    cout<<setprecision(12)<<pi2<<endl; //exact cz double

    return 0;
}