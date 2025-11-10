#include <iostream>
using namespace std;

void decToBin(int binNum) {
    int n = binNum;
    int binnum = 0;
    int pow = 1; //10^0 10^1 10^2 ..
    while (n > 0) {
        int rem = n % 2;
        binnum += rem * pow;
        pow = pow * 10;
        n = n/2;
    }
    cout << binnum << endl;
    }

int main() {
    int n ;
    cout<<"enter decimal number: ";
    cin>>n;

    decToBin (n);
    return 0;
}