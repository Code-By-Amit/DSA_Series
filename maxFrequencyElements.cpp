class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq = INT_MIN;
        unordered_map<int,int> map;
    

        for(int i: nums){
            map[i]++;
            maxFreq = max(maxFreq, map[i]);
        }

        int totalFreq = 0;
        for(auto p: map){
            if(p.second == maxFreq) totalFreq+=p.second;
        }
        return totalFreq;
    }
};
