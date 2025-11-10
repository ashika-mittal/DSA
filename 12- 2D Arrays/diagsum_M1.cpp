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

    //diag sum for primary "\"
    int p_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
            p_sum=p_sum+ mat[i][j]  ;
            }    
        }
    }
    cout<<"primary diag sum = "<< p_sum << endl;;

    //diag sum for secondary "/"
    int s_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==n-i-1){
            s_sum=s_sum+ mat[i][j]  ;
            }    
        }
    }
    cout<<"secondary diag sum = "<< s_sum << endl;

    //totalsum of diag
    //->in odd n x n matrix : middle element is repeated(added twice)

    int totalsum =0;
    int mid=0;
    if (n%2!=0){
        mid= mat[n/2][n/2];
    }
    cout<<"mid: "<<mid<<endl;
    totalsum = p_sum + s_sum - mid;
    cout<<"sum of diag elemts = "<<totalsum<<endl ;
}

//TC -> O(n^2)