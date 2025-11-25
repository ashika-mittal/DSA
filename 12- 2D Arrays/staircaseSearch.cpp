#include<iostream>
using namespace std;

//imp:- remember to enter a sorted arrayyy!!!!

bool StaircaseSearch(int mat[][5], int n , int m , int key){

        //top right
    int i=0;
    int j= m-1;

    while(i>=0 && j<m){
        if(key==mat[i][j]){
            cout<<" key found at index : "<<"("<<i<<" , "<<j<<")"<<endl;
            return true;
        }
        else if(key<mat[i][j]){
            //left
            j--;
        }
        else{   //(key>mat[i][j])
            //below
            i++;
        }
    }

    cout<<"key not found.";
    return false;
}

int main(){
    // int n,m;
    // cout<<"enter number of rows: ";
    // cin>>n;
    // cout<<"enter number of columns: ";
    // cin>>m;
    int n=4;
    int m=5;
    int mat[4][5];
    cout<<"enter elements : ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> mat[i][j];
        }
    }

    //display
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"enter element to search: ";
    int key;
    cin>>key;

    StaircaseSearch(mat,n,m,key);

}