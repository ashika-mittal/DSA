#include<iostream>
using namespace std;

int trap(int heights[], int n){
    
    int maxLeft[20000];
    int maxRight[20000];

    maxLeft[0]=heights[0];
    for(int i=1;i<n;i++){
        maxLeft[i]=max(maxLeft[i-1],heights[i-1]);
    }

    maxRight[n-1] = heights[n-1];
    for(int i=n-2;i>=0;i--){
        maxRight[i]=max(maxRight[i+1],heights[i+1]);
    }
    
    int totalTrap=0;
    for(int i=0;i<n;i++){
        int trap= min(maxLeft[i],maxRight[i])-heights[i];
        if(trap>0){
        totalTrap=totalTrap+trap;
        }
    }

    //cout<<"max rainwater trapped = "<<totalTrap<<endl;;
    return totalTrap;

}


int main(){
    int heights[]={4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);

    cout<< trap(heights,n);

}