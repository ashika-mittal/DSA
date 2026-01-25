#include<iostream>
#include<vector>
using namespace std;

int lastoccur ( vector<int> arr, int i, int target){

    if(i==arr.size()){
        return -1;    
    }
    int idxFound = lastoccur(arr,i+1,target);
    if(idxFound==-1 && arr[i]==target){
        return i;   
    }

    return idxFound;
}

int main(){
    vector<int> arr= {1,2,3,3,3,3,4,5,8,6,7};
   cout<< lastoccur(arr,0,3) <<endl;
}