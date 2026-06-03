#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<char>>& board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"--------------------------"<<endl;
}

bool isSafe(vector<vector<char>>& board, int row, int col){
    // check column
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    // check upper left diagonal
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    // check upper right diagonal
    for(int i=row-1, j=col+1; i>=0 && j<board.size(); i--, j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void nQueens(vector<vector<char>>& board, int row){

    if(row==board.size()){
        printBoard(board);
        return;
    }

    for(int col=0;col<board.size();col++){
        if(isSafe(board, row, col)){
            board[row][col]='Q';
            nQueens(board, row+1);
            board[row][col]='.';
        }
    }
}

int main(){
    vector<vector<char>> board;
    int n=4;
    for(int i=0;i<n;i++){
        vector<char> newRow;
        for(int j=0;j<n;j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    printBoard(board);

    nQueens(board, 0);
}