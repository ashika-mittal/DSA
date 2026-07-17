#include<iostream>

using namespace std;

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

    //compare function in pairs
    pair<int,int> p1 = {1, 2};
    pair<int,int> p2 = {1, 3};  

    if(p1 < p2){
        cout<<"p1 is smaller than p2"<<endl;
    }
    else{
        cout<<"p2 is smaller than p1"<<endl;
    }

    cout<<endl;

    cout<<"Using compare function"<<endl;
    if(compare(p1, p2)){
        cout<<"p1 is smaller than p2"<<endl;
    }
    else{
        cout<<"p2 is smaller than p1"<<endl;
    }

    //using compare function in pairs
    pair<int,int> p3 = {1, 2};
    pair<int,int> p4 = {1, 3};  


}