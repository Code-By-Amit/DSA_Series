class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int maxWealth  = 0;
        for(int i=0;i<n; i++){
            int wealth  = 0;
            for(int j=0; j<accounts[i].size();j++){
                wealth +=accounts[i][j];
            }
            maxWealth = max(maxWealth,wealth );
        }
        return maxWealth;
    }
};
