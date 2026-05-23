#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination){
    if (n==1){
        cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1, source, destination, helper);
    cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, helper, source, destination);

    
}

int main(){
    int n;
    cout<<"enter number of disks : ";
    cin>>n;
    towerOfHanoi(n, 'S', 'H', 'D');
}