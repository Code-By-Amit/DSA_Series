class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int repetingVal,missingVal; 
        int actualSum = 0;
        unordered_set<int> s;
        int n = grid.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                int a = grid[i][j];
                actualSum+=a;
                if(s.find(a) != s.end()) repetingVal=a;
                s.insert(a);
            }
        }

        int expectedSum = n*n * (n*n + 1)/2;
        missingVal = expectedSum - (actualSum - repetingVal);

        return {repetingVal , missingVal};
    }
};
