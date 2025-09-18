// Time complexity: O(n) || Space Complexity O(2n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        int n = ans.size();
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
