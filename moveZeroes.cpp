class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lp =0;
        for(int rp=0;rp<nums.size();rp++){
            if(nums[rp] != 0){
                swap(nums[lp],nums[rp]);
                lp++;
            }
        }
    }
};
