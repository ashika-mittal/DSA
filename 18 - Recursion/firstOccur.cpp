#include<iostream>
#include<vector>
using namespace std;

int firstOcccur ( vector<int> arr, int i, int target){

    if(i==arr.size()){
        return -1;    
    }
    if(arr[i]==target){
        return i;   
    }

    return firstOcccur(arr,i+1, target);
}

int main(){
    vector<int> arr= {1,2,3,3,3,3,4,5,8,6,7};
   cout<< firstOcccur(arr,0,3) <<endl;
}