// Optimized. 
class Solution { // Tc O(n) | Sc O(n)
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> m;

      for(int i=0; i<nums.size(); i++){
        int a = target - nums[i];
        if(m.find(a) != m.end()){
            return {i, m[a]};
        }else{
            m[nums[i]] = i;
        }
      }
        return {0,0};
    }
};

// BruteForce Approach
class Solution {  // Tc O(n^2) | Sc O(1)
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int first = 0;
    int second = 1;
    while(first < nums.size()-1){
        if(nums[first]+nums[second] == target){
            ans.push_back(first);
            ans.push_back(second);
            return ans;
        }
        if(first < nums.size()-1 && second == nums.size()-1){
            first++;
            second =first +1;
        }else{
        second++;
        }
    }
    return ans;
}
};
