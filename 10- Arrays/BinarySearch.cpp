#include<iostream>
using namespace std;

//Array has to be sorted!

int BinarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid;
    
    while(start<=end){
        mid = (start+end)/2; 

        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
    }
    return -1;

}

int main(){
    int arr[]   = {1,2,3,4,5,6,7,8,9};
    int key;
    int n= sizeof(arr)/sizeof(int);
    cout<<"enter element to search : ";
    cin>>key;
    int result = BinarySearch(arr, n, key);
    if(result!=-1){
        cout<< "element fount at index : " << result <<endl;;
    }
    else{
        cout<<result<<endl;;
    }
}
