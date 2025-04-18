class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        int count = 0;

        for (int val : nums) {
            count += m[val];
            m[val]++;
        }
        return count;
    }
};
