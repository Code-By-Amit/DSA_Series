class Solution {
public:
    bool check(vector<vector<char>>& board, int row, int col ,int idx, string word){
        if(idx == word.size()) return true;
        int n = board.size();
        int m = board[0].size();

         if (row < 0 || row >= n || col < 0 || col >= m ||
            board[row][col] == '#' || board[row][col] != word[idx]) {
            return false;
        }

        char temp =  board[row][col] ;
        board[row][col] = '#';
        bool ans1 = check(board, row - 1, col,idx+1, word); // top
        bool ans2 = check(board, row + 1, col,idx+1, word); // bottom
        bool ans3 = check(board, row, col - 1,idx+1, word);  // left
        bool ans4 = check(board, row, col + 1,idx+1, word);  // right
        board[row][col] = temp;
        
        return ans1 || ans2 || ans3 || ans4;
    }


    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j] == word[0]){
                    if(check(board,i, j,0,word)) return true;
                } 
            }
        }
        return false;
    }
};
