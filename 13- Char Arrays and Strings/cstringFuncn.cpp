#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str1[100]= "hi";
    char str2[100]= "world";
    char str3[100]= "hello";

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<endl;

    strcpy(str1, str3); //(dest,src) //->str1 becomes hello 
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<endl;

    strcat(str1, str2); //str1 becomes helloworld
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<endl;

    cout<<strcmp(str1,str2)<<endl;  //helloworld<world
    cout<<strcmp(str2,str3)<<endl;  //world>hello
    cout<<strcmp(str1,str3)<<endl;  //helloworld>hello
    cout<<strcmp(str1,str1)<<endl;  //helloworld=helloworld


}