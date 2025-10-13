class Solution {
public:

    bool checkTour(vector<vector<int>>& grid, int row, int col, int expVal){
        int n = grid.size();
        if(row < 0 || col < 0 || row>= n || col >= n || grid[row][col] != expVal){
            return false;
        }

        if(grid[row][col] == n*n-1){
           return true;
        }

       int ans1 = checkTour(grid,row-2,col-1,expVal + 1);  // up,left
       int ans2 =  checkTour(grid,row-2,col+1,expVal + 1);  // up,right

       int ans3 =  checkTour(grid,row+2,col-1,expVal + 1);  // down,left
       int ans4 =  checkTour(grid,row+2,col+1,expVal + 1);  // down,right

       int ans5 =  checkTour(grid,row-1,col-2,expVal + 1);  // left,up
       int ans6 =  checkTour(grid,row+1,col-2,expVal + 1);  // left,down

       int ans7 =  checkTour(grid,row-1,col+2,expVal + 1);  // right,up
       int ans8 =  checkTour(grid,row+1,col+2,expVal + 1);  // right,down

       return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
        return  checkTour(grid,0,0,0);
    }
};
