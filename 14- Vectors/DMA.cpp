#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<< "enter rows: ";
    cin>>rows;
    cout<<"enter cols: ";
    cin>>cols;
    int a;

   // int* ptr = new int;  ->for integer dymanic
   // int* arr = new int[5];  ->dynamic array

   //array of pointers ->
   int** mat = new int* [rows];

   for(i=0; i<rows; i++){
    mat[i]= new int[cols];     
   }

   //data store
   int x=1;
   for(int i=0;i<rows;i++){
    for(int j=0;i<cols;j++){
        mat[i][j]=x;
        x++;
    }
    cout<<endl;
   }

   //mat[i][j] = *(*(mat + i) +j)

   

}