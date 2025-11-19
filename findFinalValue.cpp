class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> set(nums.begin(),nums.end());
        while(set.count(original)){
            original = 2*original;
        }
        return original;
    }
};



class Solution {
public:
       int findFinalValue(vector<int>& nums, int original) {
          sort(nums.begin(),nums.end());
            for(int i : nums){
                if(i==original){
                    original = original*2;
                }
            }
        return original;
    }

};
