#include<iostream>
using namespace std;

bool isSorted (int arr[], int n, int i){
    if(i==n-1){
        return true;    //sorted
    }
    if(arr[i]>arr[i+1]){
        return false;   //not sorted
    }
     return isSorted(arr,n,i+1);
}

int main(){
    int arr[8]= {1,2,3,4,5,8,6,7};
   cout<< isSorted(arr,8,0) <<endl;
}