class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        vector<int> odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i] %2 == 0){
                result.push_back(nums[i]);
            }else odd.push_back(nums[i]);
        } 
        for(int i:odd){
            result.push_back(i);
        }
        return result;
    }
};
