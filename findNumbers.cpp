class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int noOfDigit = (int)log10(nums[i]) + 1;
            if(noOfDigit%2==0) count++;
        }
        return count;
    }
};
