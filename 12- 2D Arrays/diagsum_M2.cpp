#include<iostream>
using namespace std;
int main(){
    int n=5; //rows
    int m=5; //colmn

    int mat[n][m];

    cout<<"enter the elements: ";
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

    //diag sum
    
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];              // pd (primary diagonal "\")
        if (i != n - 1 - i) {          // avoid double-counting center
            sum += mat[i][n - 1 - i];  // sd (secondary diagonal "/")
        }
    }

    cout<<"sum of diag elemts = "<<sum<<endl ;
}

//TC -> O(n)