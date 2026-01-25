#include<iostream>
using namespace std;

int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }
    //vertical
    int ans1 = tilingProblem(n-1);

    //horizontal
    int ans2 = tilingProblem(n-2);

    return ans1 + ans2;
}

int main(){
    cout<<"enter value n for (2 x n) tiling floor: ";
    int n;
    cin>>n;
    cout<< "(2 x )"<<n<<" tiling floor : number of ways to tile with (2 x 1) tiles = \n";
    cout << tilingProblem(n) <<endl;
    return 0;
}