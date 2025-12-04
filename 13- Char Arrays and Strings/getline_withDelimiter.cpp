#include<iostream>
using namespace std;
int main(){


    char sentence[100];
    cin.getline(sentence, 100 , '.');
    //here . is a delimiter ->
    //iske aage kuch bhi likhaa hai, that will be ignored.
    cout<<"your text was: " << sentence << endl;
    cout<<"length: "<< strlen(sentence)<< endl;

    

}