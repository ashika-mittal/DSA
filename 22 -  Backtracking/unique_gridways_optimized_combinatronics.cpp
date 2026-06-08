#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 3;
    int ans=1;
    for(int i =m+n-2, j=1; i>=max(m,n); i--, j++){
        ans = (ans*i)/j;   
    }
    cout << "Number of unique paths: "<<endl << ans << endl;
    return 0;
}