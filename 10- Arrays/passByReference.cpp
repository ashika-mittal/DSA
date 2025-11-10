#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main(){
  
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(int);

    printArr(arr, n);
}

// When you pass an array to a function in C++,
// you don’t actually pass the whole array —
// you pass a pointer to its first element (i.e., its starting address).


// 	•	arr decays into a pointer → &arr[0]
// 	•	Inside the function, arr means the address of the first element
// 	•	So changes made to elements inside the function affect the original array.

// Hence, we say arrays are passed by reference (technically by pointer).

// Inside printArr(),
// the parameter int arr[] is actually treated as int *arr.

// Pointers don’t carry size info —
// so the function has no idea how many elements the array has.

// That’s why you must pass the size explicitly

// In the same scope where the array is declared (e.g., main),
// sizeof(arr) gives the total number of bytes in the entire array.

// But inside a function, arr becomes just a pointer,
// so sizeof(arr) gives 8 (on 64-bit) — the size of the integer pointer, not the array.

// That’s why we compute n before calling the function and pass it along.