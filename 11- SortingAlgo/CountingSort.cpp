#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void CountSort(int arr[], int n){
    printarr(arr,n);
    int freq[100000]={0};
    int maxVal= INT_MIN;
    int minVal= INT_MAX;
    for(int i=0;i<n;i++){
        maxVal= max(maxVal, arr[i]);
        minVal= min(minVal, arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=minVal;i<=maxVal;i++){
    while (freq[i]>0)
    {
        arr[j]=i;
        j++;
        freq[i]--;
    }
    }
    printarr(arr,n);
    
    
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n= sizeof(arr)/sizeof(int);
    CountSort(arr,n);
}