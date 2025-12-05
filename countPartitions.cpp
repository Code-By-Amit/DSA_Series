class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int rightSum = 0;
        for(int i : nums) rightSum+=i;

        rightSum-= nums[0];

        int sum = nums[0];
        int ans = 0;
        for (int i=1; i<nums.size(); i++){
            if((sum-rightSum)%2 == 0) ans++;
            sum+=nums[i];
            rightSum-=nums[i];
        }
        return ans;
    }
};
