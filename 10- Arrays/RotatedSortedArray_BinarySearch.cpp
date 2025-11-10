#include<iostream>
using namespace std;

//Array has to be sorted!

int BinarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid;

    while(start<=end){
mid = start + (end-start)/2;
    
    if(key==arr[mid]){
        return mid;
    }

    //left half sorted
    if(arr[start] < arr[mid]){
        if(key<arr[mid] && key>=arr[start]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    else{
        if(key>arr[mid]&& key<=arr[end]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }


}

return -1;
 

}

int main(){
    int arr[]   = {5,6,7,8,9,1,2,3,4};
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
