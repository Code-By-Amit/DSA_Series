class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {   // O(m + n)
        int m = matrix.size(), n = matrix[0].size();
        int r = 0;
        int c = n-1;
        while(r < m && c >= 0){ 
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) c--;
            else r++;
        }
        return false;
    }
};
