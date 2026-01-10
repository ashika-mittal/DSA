#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
        Complex(int r, int i){
            real=r;
            img=i;
        }

    void print(){
        cout << real << " + " << img << "i" <<endl ;
    }

    //operator overloading
    void operator + (Complex &c2){
        int finalReal = this->real + c2.real;
        int finalImg = this->img + c2.img;
        Complex c3(finalReal, finalImg);
        c3.print();
    }

};


int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.print();
    c2.print();
    c1+c2;

}