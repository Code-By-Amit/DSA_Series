// Time Complexity: O(n) || Space Compexity: O(1)
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i:nums) totalSum+=i;

        vector<int> result; 
        int leftSum = 0;
        for(int i=0; i<n;i++){
            int rightSum = totalSum - leftSum - nums[i];
            int a = rightSum -leftSum;
            result.push_back( abs(a) ) ;
            leftSum+=nums[i];
        }
        return result;
    }
};
