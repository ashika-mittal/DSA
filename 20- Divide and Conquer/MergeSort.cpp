#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int si, int mid, int ei){
    // Implementation for merging two sorted subarrays
    vector<int> temp;
    int i = si; // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    while(i <= mid && j <= ei){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy the remaining elements of left subarray, if any
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;    
    }

    // Copy the remaining elements of right subarray, if any
    while(j <= ei){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the merged elements back to the original array
    for(int k = 0; k < temp.size(); k++){
        arr[si + k] = temp[k];
    }
}



void mergesort(vector<int>& arr, int si, int ei){

    if(si >= ei){
        return;
    } //base case. 

    int mid = si + (ei-si)/2;

    mergesort(arr, si, mid); //left part
    mergesort(arr, mid+1, ei); //right part

    merge(arr, si, mid, ei); //conquer step

}

void printArray(vector<int>& arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {6,3,7,5,2,4};
    int n = arr.size();
    mergesort(arr, 0, n-1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;

}