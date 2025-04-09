class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int a = 0; a < n; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;

            for (int b = a + 1; b < n;) {
                
                int c = b + 1;
                int d = n - 1;
                while (c < d) {
                    long long int sum = (long long)nums[a] +
                                        (long long)nums[b] +
                                        (long long)nums[c] + (long long)nums[d];
                    if (sum > target) {
                        d--;
                    } else if (sum < target) {
                        c++;
                    } else {
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                        while (c < d && nums[c] == nums[c - 1]) c++;
                    }
                }
                b++;
                while (b < n && nums[b] == nums[b - 1]) b++;
            }
        }

        return ans;
    }
};
