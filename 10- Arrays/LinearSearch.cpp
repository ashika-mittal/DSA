#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]   = {1,3,7,2,5,6,4,9,8,11};
    int key;
    int n= sizeof(arr)/sizeof(int);
    cout<<"enter element to search : ";
    cin>>key;
    int result = LinearSearch(arr, n, key);
    if(result!=-1){
        cout<< "element fount at index : " << result <<endl;;
    }
    else{
        cout<<result<<endl;;
    }
}

	// 1.	Start from the first element of the array.
	// 2.	Compare each element with the key (the value you want to find).
	// 3.	If it matches → return its index.
	// 4.	If not found till the end → return -1 (not found).

    // As the size of array increases -> No. of operations increase. (here, iterations of loop)
    // Linear Time Complexity -> O(n) -> Linear Search.
    // straight line graph.