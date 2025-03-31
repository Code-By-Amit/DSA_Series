class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lp = 0;
        int rp = 1;
        while(rp < nums.size()){
            if(nums[lp] != nums[rp]){
                lp++;
                swap(nums[lp],nums[rp]);
            }
            rp++;
        }
        return lp+1;
    }
};
