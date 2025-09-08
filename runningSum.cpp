// TC: O(n) || SC = O(1)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum = nums[0];

        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};
