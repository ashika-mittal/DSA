#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }

        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
    
}
int main(){
int arr[]= {4,2,6,1,8,3,9,5,7};
int n= sizeof(arr)/sizeof(int);
BubbleSort(arr,n);
    
}