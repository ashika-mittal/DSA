#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;

    char str1[]={'c','o','d','e'};
    cout<<str1<<endl;

    char str2[]={'c','o','d','e','\0'};
    cout<<str2<<endl;

    char work1[]="code";
    cout<<work1<<endl;

    //char work2[4]="code";-> error as size should be 5 (null char also thr)
    char work2[5]="code";
    cout<<work2<<endl;

    char work3[]="code";
    cout<<work3<<endl;
    cout<<strlen(work3)<<endl;
}