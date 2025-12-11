#include<iostream>
#include<vector>

using namespace std;

vector<int> PairSum (vector<int> arr, int target){
    int st=0;
    int end= arr.size()-1;
    vector<int> ans;

    while(st<end){
        if(arr[st]+ arr[end]== target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(arr[st]+ arr[end]<= target){
            st++;
        }
        else if(arr[st]+ arr[end]>= target){
            end--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,4,5,7,9,11,15,19};
    int target = 9;
    vector<int> ans= PairSum(arr, target);
    cout<< ans[0]<<" "<< ans[1]<<endl;
}