class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i:nums) map[i]++;

        int maxLen = 0;
        for(auto p: map){
            if(map.find(p.first+1) != map.end()){
                int count = p.second + map[p.first+1];
                maxLen = max(maxLen,count);
            }
        }
        return maxLen;
    }
};
