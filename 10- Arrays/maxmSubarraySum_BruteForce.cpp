#include<iostream>
using namespace std;

void maxmSubarraySum(int arr[], int n){
    int sum = 0;
    int maxm=INT_MIN;
    for(int st = 0; st<n ; st++){
        for(int end = st ; end<n ; end++){
            for(int i = st; i<=end; i++){
                sum=sum+arr[i];
            }
            cout<<sum <<" ";
            maxm=max(sum,maxm);
            sum=0;
            
        }
        cout<<endl;
    }
    cout<<endl<<"maxm subarray sum= "<<maxm<<endl;;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxmSubarraySum(arr,n);
}