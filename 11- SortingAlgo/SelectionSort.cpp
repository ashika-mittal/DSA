#include<iostream>
using namespace std;


void SelectionSort(int arr[], int n){
for(int i=0 ; i<n-1 ; i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if (arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[minIndex], arr[i]);
}



for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
}


int main(){
int arr[]= {4,2,6,1,8,3,9,5,7};
int n= sizeof(arr)/sizeof(int);
SelectionSort(arr,n);
    
}