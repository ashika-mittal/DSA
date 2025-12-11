#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec1;
    cout<<vec1.size()<<endl;

    vector<int> vec2 = {1,2,3,4,5};
    cout<<vec2.size()<<endl;

    vector<int> vec3(5, -1); //fill constructor
    cout<<vec3.size()<<endl;
}