// Time Complexity (TC): O(N + R) ≈ O(N) linear
// Space Complexity (SC): O(R + K) ≈ O(K) practically
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> result;
        vector<int> freq(1001,0);
        for(int i=0; i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                int index = nums[i][j];
                freq[index]++;
            }
        }

        for(int i=1; i<freq.size();i++){
            if(freq[i] == nums.size()){
                result.push_back(i);
            }
        }
        return result;
    }
};

// Time Complexity (TC): O(N log M)
// Space Complexity (SC): O(M + K)
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> map;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                map[nums[i][j]]++;
            }
        }
        vector<int> result;
        for(auto p:map){
            if(p.second == nums.size()){
                result.push_back(p.first);
            }
        }
        // sort(result.begin(),result.end());
        return result;
    }
};
