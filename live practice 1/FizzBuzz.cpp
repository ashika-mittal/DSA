#include<iostream>
using namespace std;
int main(){
    //multiple of 3 -> Fizz
    //multiple of 5 -> Buzz
    //both 3 and 5 -> FizzBuzz

    int n;
    cin>>n;
    int counter3=0, counter5=0;

    for(int i =1;i<=n;i++){
        counter3++;
        counter5++;

        if(counter3==3 && counter5==5){
            counter3=0; counter5=0;
            cout<<"FizzBuzz"<<endl;;
        }
        else if(counter3==3){
            counter3=0;
            cout<<"Fizz"<<endl;
        }
        else if(counter5==5){
            counter5=0;
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }
}