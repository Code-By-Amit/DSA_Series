class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row){ // O(log n)
        int n = matrix[row].size();
        int st = 0;
        int end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(matrix[row][mid] == target) return true;
            if(matrix[row][mid] < target) st = mid + 1;
            else end = mid - 1; 
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {  // O(log m + log n) -> O(log (m*n)) 
        int rowN = matrix.size();
        int colN = matrix[0].size();

        int startRow = 0,endRow = rowN -1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow) /2;
            if(matrix[midRow][0] <= target && target <= matrix[midRow][colN-1]){
                // Search In this Row
                return searchInRow(matrix ,target ,midRow);
            }else if (matrix[midRow][colN-1] < target){
                // Go Up
                startRow = midRow + 1;
            }else{
                // Go Down
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
