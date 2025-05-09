class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int lp =0;
        int rp = 0;
        while(rp < nums.size()){
            if(nums[rp] != 0){
                swap(nums[lp] ,nums[rp]);
                lp++;
            }
            rp++;
        }
        return nums;
    }
};
