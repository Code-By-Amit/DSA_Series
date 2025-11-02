class Solution {
public:
    void guardCells( vector<vector<int>> &grid, int i, int j){
        int m = grid.size();
        int n = grid[0].size();

        int row = i;
        int col = j+1;
        // right
        while(col < n && grid[row][col] != -1  && grid[row][col] != 1){
            grid[row][col++] = 2;
        }

        // left
        col = j-1;
         while(col >= 0 && grid[row][col] != -1  && grid[row][col] != 1){
            grid[row][col--] = 2;
        }

        // bottom 
        row = i+1;
        col = j;
         while(row < m && grid[row][col] != -1  && grid[row][col] != 1){
            grid[row++][col] = 2;
        }

        // top
        row = i-1;
        while(row >= 0 && grid[row][col] != -1  && grid[row][col] != 1){
            grid[row--][col] = 2;
        }
        return;
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        for(auto &g: guards){
            int r = g[0];
            int c = g[1];
            grid[r][c] = 1;
        }

        for(auto &w: walls){
            int r = w[0];
            int c = w[1];
            grid[r][c] = -1;
        }

        for(auto &g: guards){
           guardCells(grid,g[0],g[1]);
        }
       

        int count = 0;

        for(int i=0; i<m; i++){
            for(int j = 0 ; j<n; j++){
                if(grid[i][j] == 0) count++;
            }
        }

        return count;
    }
};
