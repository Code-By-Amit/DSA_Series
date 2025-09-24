// Time Complexity: O(m*n) || Space Complexity: O(m*n)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if((m*n) != (r*c)) return mat;
        vector<vector<int>> result(r,vector<int>(c));

        int k=0;
        int l=0;

        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j] = mat[k][l];
                l++;
                if(l == n){
                    k++;
                    l=0;
                }
            }
        }
        return result;
    }
};
