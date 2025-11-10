#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]   = {1,3,7,2,5,6,4,9,8,11};
    int n= sizeof(arr)/sizeof(int);
  
    int start=0; 
    int end=n-1;

    while(start<end){
        // swap(arr[start], arr[end]); ->
        //cpp has an inbuilt swap funtion. This can be used.

        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
    printArr(arr,n);
}