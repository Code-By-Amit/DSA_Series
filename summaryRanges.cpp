class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() < 1)return {};
        vector<string> result;
        int start = nums[0];
        int end ;

        for(int i=1;i<=nums.size();i++){
            if(i == nums.size() || nums[i]-1 != nums[i-1]){
                end = nums[i-1];
                if(start == end) result.push_back(to_string(start));
                else  result.push_back(to_string(start) + "->" + to_string(end));
                if(i<nums.size()) start = nums[i];
            }
        }

        return result;
    }
};
