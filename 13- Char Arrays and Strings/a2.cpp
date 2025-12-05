#include<iostream>
#include <string>

using namespace std;

bool almostSame(string s1, string s2){
    if(s1.length()!= s2.length()){
        cout<<"not almost equal";
        return false;
    }
    int diffcount=0;
    char diffchs1, diffchs2;

    for(int i=0;i<s1.length();i++){
        if (s1[i]!=s2[i]){
            if(diffcount==0){
                 diffchs1 = s1[i];
                 diffchs2= s2[i];
            }
            else{
                if((s1[i]!=diffchs2) ||(s2[i]!=diffchs1)){
                    cout<<"not possible in one swap" <<endl;
                    return false;
                }
            }
            diffcount++;
        }

        if (diffcount > 2 ){
            cout<<"not possible in one swap" <<endl;
            return false;
        }

    }
    if(diffcount==1 ){
        cout<<"not possible in one swap" <<endl;
        return false;
    }

    cout<<"possible in one swap" <<endl;
    return true;
}

int main(){
    string s1;
    string s2;
    cin>>s1;
    cout<<s1<<endl;
    cin>>s2;
    cout<<s2<<endl;

    cout<< almostSame(s1,s2) ;
}