#include <iostream>
using namespace std;

int uniquePaths(int row, int col,int m, int n, string ans) {
    if (row == m - 1 && col == n - 1) {
        cout << ans << endl;
        return 1; // Reached the destination
    }
    if (row >= m || col >= n) {
        return 0; // Out of bounds
    }
    return uniquePaths(row + 1, col, m, n, ans + "D") + uniquePaths(row, col + 1, m, n, ans + "R"); // Move down and move right
}

// The above implementation is straightforward but can be inefficient for larger values of m and n due to repeated calculations.
// To optimize it, we can use dynamic programming to store previously calculated results.

int main() {
    int m = 3, n = 3;
    string ans = "";
    cout << "Number of unique paths: "<<endl << uniquePaths(0,0,m, n, ans) << endl;
    return 0;
}