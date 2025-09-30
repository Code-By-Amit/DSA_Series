class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int minLength = INT_MAX;
        int st = 0;
        int end = 0;
  
        for (int i:nums) {
            sum += i;
            while (sum >= target) {
                minLength = min(minLength, end - st + 1);
                sum -= nums[st++];
            }
            end++;
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};
