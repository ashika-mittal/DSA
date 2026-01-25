#include<iostream>
using namespace std;

//assuming all characters are lowercase.

void removeDuplicate(int i , string str, string ans, bool map[26] ){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    
    char ch = str[i];
    int mapIdx = (int)(ch-'a'); //'a'->0, 'b'->1 ..etc

    if(map[mapIdx] == false){ //not dupli
        map[mapIdx]= true;
        removeDuplicate(i+1, str, ans+ch, map );
    }
    else{ //dupli
        removeDuplicate(i+1, str, ans, map);
    }


}

int main(){
    string str = "appnacollege" ; //apncoleg
    string ans = "";
    bool map[26] = {false}; 
    removeDuplicate(0,str,ans,map);
}