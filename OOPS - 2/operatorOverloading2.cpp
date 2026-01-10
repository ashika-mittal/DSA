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
    Complex operator + (Complex &c2){
        int finalReal = this->real + c2.real;
        int finalImg = this->img + c2.img;
        Complex c3(finalReal, finalImg);
        return c3;
    }

};


int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.print();
    c2.print();
    Complex c3= c1+c2;
    c3.print();

}