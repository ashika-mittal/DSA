#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int maze[][4], int x, int y, int N, vector<vector<bool>>& vis) {
    return x >= 0 && y >= 0 &&
           x < N && y < N &&
           maze[x][y] == 1 &&
           !vis[x][y];
}

void solveMazeUtil(int maze[][4], int x, int y, string path, int N,
                   vector<vector<bool>>& vis) {

    if (x == N - 1 && y == N - 1) {
        cout << path << endl;
        return;
    }

    vis[x][y] = true;

    // Up
    if (isSafe(maze, x - 1, y, N, vis)) {
        solveMazeUtil(maze, x - 1, y, path + "U", N, vis);
    }

    // Down
    if (isSafe(maze, x + 1, y, N, vis)) {
        solveMazeUtil(maze, x + 1, y, path + "D", N, vis);
    }

    // Right
    if (isSafe(maze, x, y + 1, N, vis)) {
        solveMazeUtil(maze, x, y + 1, path + "R", N, vis);
    }

    // Left
    if (isSafe(maze, x, y - 1, N, vis)) {
        solveMazeUtil(maze, x, y - 1, path + "L", N, vis);
    }

    vis[x][y] = false; // backtracking
}

void solveMaze(int maze[][4], int N) {
    vector<vector<bool>> vis(N, vector<bool>(N, false));

    if (maze[0][0] == 0) {
        cout << "No path exists";
        return;
    }

    solveMazeUtil(maze, 0, 0, "", N, vis);
}

int main() {
    int N = 4;

    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    solveMaze(maze, N);

    return 0;
}