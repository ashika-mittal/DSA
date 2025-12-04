#include<iostream>
using namespace std;
int main(){
    int n=5; //rows
    int m=4; //colmn

    int mat[n][m];

    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];       
        }
    }

    //output

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<"\t";       
        }
        cout<<endl;
    }

cout<<endl<<endl;

//TRANSPOSE

    int trans[m][n];
    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[i][j]= mat[j][i]    ;
        }
    }

    //output

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<"\t";       
        }
        cout<<endl;
    }
}