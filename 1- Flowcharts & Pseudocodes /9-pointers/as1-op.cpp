#include<iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr = &a;
    char ch = 'A';//65
    char &cho = ch; //ref to ch : points where ch is stored. &cho ->refers to ch
   
    cho += a; //ch = ch+a -> ch=65+32 =97 (a ->since char)
    *ptr += ch; //a=a+ch -> a=32+97 = 129
    cout << a << ", " << ch << endl;
}