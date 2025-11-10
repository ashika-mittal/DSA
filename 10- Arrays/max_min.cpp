#include<iostream>
using namespace std;


int main(){
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr [n];

    cout<<"enter elements of array: ";
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    // int arr[]={1,2,3,4,5,6,7};
    // int n = sizeof(arr)/sizeof(int);

    int max= arr[0];
    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"min= "<<min<<endl;
    cout<<"max= "<<max;
}