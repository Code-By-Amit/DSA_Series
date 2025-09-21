// Time Complexity: O(n) || Space Complexity: O(1)
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                int count = 1;
                while (i < nums.size() - 1 && nums[i] % 2 != nums[i + 1] % 2) {
                    if (nums[i] > threshold || nums[i+1] > threshold ) break;
                    count++;
                    i++;
                }
                result = max(count,result);
            }
        }
        return result;
    }
};
