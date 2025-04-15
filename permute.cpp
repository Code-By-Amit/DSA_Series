class Solution { // Tc O(n!*n) | Sc O(n!)
public:
    void getPermutations(vector<int>& nums , int idx, vector<vector<int>> &allPermutation){
        if(idx == nums.size()){
            allPermutation.push_back({nums});
            return;
        }

        for(int i=idx;i<nums.size();i++){
            swap(nums[idx] , nums[i]);
            getPermutations(nums,idx+1,allPermutation);
            swap(nums[idx] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allPermutation;
        getPermutations(nums,0,allPermutation);
        return allPermutation;
    }
};
