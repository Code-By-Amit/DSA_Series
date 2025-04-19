class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int numSize = nums.size();
        vector<int> ans(numSize, 0);
        int j = 0;
        for (int i = 0; i < numSize; i++) {
            if (i%2==0) ans[i] = nums[j++];
            else  ans[i] = nums[n++];
        }
        return ans;
    }
};
