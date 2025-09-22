// Time complexity: O(n) || Space Complexity: O(n)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            if(map.find(a) != map.end()){
                int j = map[a];
                   if(abs(i - j) <= k) return true;
            }
                map[a] = i;
        }
        return false;
    }
};
