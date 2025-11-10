#include<iostream>
using namespace std;

void spiralMat(int mat[][4], int n, int m){

    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=m-1;

    while (ec>=sc && sr<=er){
        //top
        for(int i=sc;i<=ec;i++){
            cout<<mat[sr][i]<<" ";
        }

        //right
        for(int i=sr+1;i<=er;i++){
            cout<<mat[i][ec]<<" ";
        }

        //bottom
        for(int i=ec-1;i>=sc;i--){
            cout<<mat[er][i]<<" ";
        }

        //left
        for(int i=er-1;i>=sr+1;i--){
            cout<<mat[i][sc]<<" ";
        }

        sr++; sc++;
        er--; ec--;
    }



}
int main(){
    int n=5; //rows
    int m=4; //colmn

    int mat[5][4];

    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];       
        }
    }

    cout<<endl;

    //output

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<"\t";       
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    spiralMat(mat,n,m);
    cout<<endl;

    return 0;
}