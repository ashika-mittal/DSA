#include<iostream>
using namespace std;

void maxProfit(int arr[], int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1], arr[i-1]);
        //cout<<bestBuy[i]<<" ";
    }

    int maxProfit=0;

    for(int i=0;i<n;i++){
        int profit= arr[i]-bestBuy[i];
        maxProfit=max(maxProfit,profit);
    }

    cout<<"maximum profit : "<<maxProfit;
}

int main(){
    int arr[]= {7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxProfit(arr,n);
}