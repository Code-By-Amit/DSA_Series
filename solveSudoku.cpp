// Time Complexity: O(9^M)
// M = number of empty cells
// Har empty cell ke liye hum 1 se 9 tak sab numbers try karte hain.
// Isliye worst case me 9^M possibilities hoti hain.

// Space Complexity: O(1)
// Sudoku board hamesha 9x9 fix hota hai.
// Recursion stack bhi max 81 level tak ja sakta hai (fix).
// Isliye space constant hi rahega.

class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char digit){ // Time: O(1) because we check at most 27 cells (9 row + 9 col + 9 grid)
        // horizontal                                                         // Space: O(1)
        for(int j=0; j<9; j++){
            if(board[row][j] == digit){
                return false;
            }
        }

         // verticle 
        for(int i=0; i<9; i++){
            if(board[i][col] == digit){
                return false;
            }
        }

        // grid
        int stRow = (row/3) * 3;
        int stCol = (col /3) * 3;  

        for(int i= stRow; i<=stRow+2; i++){
              for(int j= stCol; j<=stCol + 2; j++){
                if(board[i][j] == digit)return false;
              }
        }

        return true;
    }

    bool helper(vector<vector<char>>& board, int row, int col){
        if(row == 9) return true;

        int nextRow = row;
        int nextCol = col +1;
        if(nextCol == 9){
            nextRow = row +1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
            return  helper(board, nextRow ,nextCol);
        }

        for(char i='1'; i<= '9'; i++){
            if(isSafe(board, row,col, i)){
                board[row][col] = i;
                if(helper(board, nextRow ,nextCol)) return true;
                board[row][col] = '.';                
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0 ,0);
    }
};
