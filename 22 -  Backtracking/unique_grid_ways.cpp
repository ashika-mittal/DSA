#include <iostream>
using namespace std;

int uniquePaths(int row, int col,int m, int n) {
    if (row == m - 1 && col == n - 1) {
        return 1; // Reached the destination
    }
    if (row >= m || col >= n) {
        return 0; // Out of bounds
    }
    return uniquePaths(row + 1, col, m, n) + uniquePaths(row, col + 1, m, n); // Move down and move right
}

// The above implementation is straightforward but can be inefficient for larger values of m and n due to repeated calculations.
// To optimize it, we can use dynamic programming to store previously calculated results.

int main() {
    int m = 3, n = 3;
    cout << "Number of unique paths: " << uniquePaths(0,0,m, n) << endl;
    return 0;
}