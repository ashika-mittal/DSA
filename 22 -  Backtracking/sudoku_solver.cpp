#include<iostream>
using namespace std;

void printSudoku(int sudoku[][9]) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int sudoku[][9], int row, int col, int digit) {
    // Check the row -> horizontal check
    for(int j = 0; j < 9; j++) {
        if(sudoku[row][j] == digit) {
            return false;
        }
    }

    // Check the column -> vertical check
    for(int i = 0; i < 9; i++) {
        if(sudoku[i][col] == digit) {
            return false;
        }
    }

    // Check the 3x3 subgrid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for(int i = startRow; i < startRow + 3; i++) {
        for(int j = startCol; j < startCol + 3; j++) {
            if(sudoku[i][j] == digit) {
                return false;
            }
        }
    }

    return true; // Safe to place the digit
}

bool sudokuSolver(int sudoku[][9], int row, int col) {
    if(col == 9) { // Move to the next row
        return sudokuSolver(sudoku, row + 1, 0);
    }

    if(row == 9) { // Reached the end of the board, solution found
        printSudoku(sudoku);
        return true;
    }

    if(sudoku[row][col] != 0) { // Skip the pre-filled cells
        return sudokuSolver(sudoku, row, col + 1);
    }

    for(int digit = 1; digit <= 9; digit++) { // Try placing digits from 1 to 9
        if(isSafe(sudoku, row, col, digit)) { // Check if it's safe to place the digit
            sudoku[row][col] = digit;

            if(sudokuSolver(sudoku, row, col + 1)) { // Move to the next column
                return true;
            }

            sudoku[row][col] = 0; // Backtrack if placing the digit doesn't lead to a solution
        }
    }

    return false; // No valid digit found, trigger backtracking
}

int main(){
    int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                        {8, 2, 7, 0, 0, 9, 0, 1, 3}
                        };
    printSudoku(sudoku);
    cout << "--------------------------" << endl;
    sudokuSolver(sudoku, 0, 0);
    return 0;           
}          

