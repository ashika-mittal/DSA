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
    int copyArr[n] ;
    for(int i=0;i<n;i++){
        copyArr[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }
    printArr(arr,n);
}