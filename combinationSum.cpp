class Solution {
public:
    set<vector<int>> set;
    void getAllSum(vector<int>& nums, vector<int>& combination, int idx,
                   int target, vector<vector<int>>& ans) {
        if (idx == nums.size() || target < 0) return;
        if (target == 0) {
            if (set.find(combination) == set.end()) {
                ans.push_back({combination});
                set.insert(combination);
            }
            return;
        }

        // include
        combination.push_back(nums[idx]);
        getAllSum(nums, combination, idx + 1, target - nums[idx], ans);
        
        // Multiple 
        getAllSum(nums, combination, idx, target - nums[idx], ans);
        combination.pop_back();

        // Exclude
        getAllSum(nums, combination, idx + 1, target, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        getAllSum(candidates, combination, 0, target, ans);
        return ans;
    }
};
