#include<iostream>
using namespace std;

// Kadane’s Algorithm

void maxmSubarraySum(int arr[], int n){
    int sum = 0;
    int maxm=INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxm=max(maxm,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<endl<<"maxm subarray sum= "<<maxm<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxmSubarraySum(arr,n);
}

// 	•	As you traverse the array, you keep track of the current subarray sum.
// 	•	If at any point the current sum becomes negative, you reset it to 0, because a negative sum will only reduce the total of any future subarray.
// 	•	You continuously track the maximum sum seen so far.

// This gives you an O(n) time complexity — only one traversal of the array!