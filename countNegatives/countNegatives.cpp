// TC = O(m log n) || SC = O(1)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto row : grid){
             int left = 0, right = row.size()-1;
             int firstNegative = row.size();
             
             while(left <= right){
             int mid = left + (right-left)/2;
                if(row[mid] < 0){
                    firstNegative = mid;
                    right = mid - 1;
                }else{
                    left = mid + 1;;
                }
             }
             count += row.size() - firstNegative;
        }
        return count;
    }
};
