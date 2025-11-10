#include<iostream>
using namespace std;

void maxmSubarraySum(int arr[], int n){
    int sum = 0;
    int maxm=INT_MIN;
    for(int st = 0; st<n ; st++){
        for(int end = st ; end<n ; end++){
            sum = sum + arr[end]; //basically same start-> adding 1 element for next subarray sum.
           // cout<<sum <<" ";
            maxm=max(sum,maxm);
        }
        sum=0;
        //cout<<endl;
    }
    cout<<endl<<"maxm subarray sum= "<<maxm<<endl;;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxmSubarraySum(arr,n);
}