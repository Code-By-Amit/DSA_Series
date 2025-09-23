// Time: O(n) || Space: O(1)
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        for (int i = 1; i < rowSize; i++) {
            int colSize = matrix[i].size();
            for (int j = 1; j < colSize; j++) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) return false;
            }
        }
        return true;
    }
};
