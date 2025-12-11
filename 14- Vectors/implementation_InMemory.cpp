#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<"size: "<<vec.size() <<endl; //5
    cout<<"capacity: "<<vec.capacity() <<endl; //5

    vec.push_back(6);
    cout<<"size: "<<vec.size() <<endl; //6
    cout<<"capacity: "<<vec.capacity() <<endl; //10

    vec.pop_back();
    cout<<"size: "<<vec.size() <<endl; //5
    cout<<"capacity: "<<vec.capacity() <<endl; //10

}