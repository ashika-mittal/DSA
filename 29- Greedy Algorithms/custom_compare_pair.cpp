#include<iostream>
using namespace std;

//custom compare function for pairs
//this function will be used to sort the pairs in ascending order based on the second element of the pair

bool compare(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second == p2.second && p1.first < p2.first){
        return true;
    }
    return false;
}

int main(){

    //sorting in pairs
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int,int>> v(3, make_pair(0,0));

    for(int i=0; i<start.size(); i++){
        //v.push_back({end[i], start[i]});
        v[i].first = start[i];
        v[i].second = end[i];
    }

    sort(v.begin(), v.end(), compare);

    //print the sorted pairs acc to second element of the pair
    for(int i=0; i<v.size(); i++){
        start[i] = v[i].first;
        end[i] = v[i].second;
        cout<<start[i]<<" "<<end[i]<<endl;
    }

    

}