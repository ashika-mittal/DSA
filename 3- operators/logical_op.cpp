#include<iostream>
using namespace std;
int main(){
    /*

    //And(&&)
        TT->T
        TF->F
        FT->F
        FF->F

    //Or(||)
        TT->T
        TF->T
        FT->T
        FF->F

    //Not(!)
        T->F
        F->T

    */
cout<< ((3<5) && (10==5)) <<endl  ;
cout<< ((3<5) && (10>5)) <<endl;
cout<< ((3<5) || (10>5)) <<endl;
cout<< ((3<5) || (10==5)) <<endl;
cout<< (!(3==5)) <<endl;

}