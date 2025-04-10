class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        int n = arr.size();
        unordered_map<int ,int> m;

        for(int i=0; i<n;i++) m[arr[i]]++;
        
        for(auto pair: m){
            if(pair.first == pair.second) ans = max(pair.first,ans);
        }
        return ans;
    }
};
