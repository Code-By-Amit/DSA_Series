class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return -1;

        int maxVal = INT_MIN;
        int minVal = INT_MAX;

        for(int i=0;i<n;i++){
            maxVal = max(maxVal,nums[i]);
            minVal = min(minVal,nums[i]);
        }

        for(int i=0; i<n; i++){
            if(nums[i] != maxVal && nums[i] != minVal){
                return nums[i];
            }
        }
        return -1;
    }
};
