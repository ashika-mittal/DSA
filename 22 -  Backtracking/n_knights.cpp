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
    // knight moves are (2,1), (2,-1), (-2,1), (-2,-1)
    int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

    for(int i=0; i<8; i++){
        int newRow = row + dx[i];
        int newCol = col + dy[i];

        if(newRow >= 0 && newRow < board.size() && newCol >= 0 && newCol < board.size()){
            if(board[newRow][newCol] == 'K'){
                return false;
            }
        }
    }

    return true;
}

void nKnights(vector<vector<char>>& board, int row){

    if(row==board.size()){
        printBoard(board);
        return;
    }

    for(int col=0;col<board.size();col++){
        if(isSafe(board, row, col)){
            board[row][col]='K';
            nKnights(board, row+1);
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

    nKnights(board, 0);
}