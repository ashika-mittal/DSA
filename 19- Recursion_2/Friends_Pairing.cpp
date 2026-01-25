#include<iostream>
using namespace std;

int FriendsPairing(int n){
    if(n==1 || n==2){
        return n;
    }

    //single
    int ans1 = FriendsPairing(n-1);

    //pair
    int ans2 = (n-1) * FriendsPairing(n-2);

    return ans1 + ans2;
}

int main(){
    cout<<"number of friends : ";
    int n;
    cin>>n;
    cout <<FriendsPairing(n) <<endl;
    return 0;
}