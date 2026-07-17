#include<iostream>

using namespace std;

int main(){

    //pairs in C++ STL : pair is a container that holds two values of same / different data types
    //it is also initialized using make_pair() function

    //sorting in pairs
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int,int>> v(3, make_pair(0,0));

    for(int i=0; i<start.size(); i++){
        //v.push_back({end[i], start[i]});
        v[i].first = end[i];
        v[i].second = start[i];
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        end[i] = v[i].first;
        start[i] = v[i].second;
    }

    for(int i=0; i<v.size(); i++){
        cout<<start[i]<<" "<<end[i]<<endl;
    }

}