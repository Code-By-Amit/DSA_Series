class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minSum = 0;

        for(int num : nums){
            sum += num;
            minSum = min(sum,minSum);
        }
        return 1 - minSum;
    }
};
