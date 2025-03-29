class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arraySum = 0;
        int totalSum = 0;
        for(int i=0; i<nums.size(); i++){
            arraySum += nums[i];
            totalSum += (i+1);
        }
        return totalSum - arraySum;
    }
};
