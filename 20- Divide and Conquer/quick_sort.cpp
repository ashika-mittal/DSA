#include<iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int si, int ei){
    int pivot = arr[ei]; // Choose the last element as pivot
    int i = si - 1; // Index of smaller element

    for(int j = si; j < ei; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i; // Return the partitioning index (pivotidx)
}


void quickSort(vector<int>& arr, int si, int ei){

    if(si >= ei){
        return;
    } //base case. 

    int pivotidx = partition(arr, si, ei); //partitioning step

    quickSort(arr, si, pivotidx-1); //left part
    quickSort(arr, pivotidx+1, ei); //right part


}

void printArray(vector<int>& arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {6,3,7,5,2,4};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;

}