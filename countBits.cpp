// BruteForce Appoach || TC O(n)
class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i=0;i<=n;i++){
            int bitsCount = 0;
            int num = i;
            while(num>0){
                num = num &(num-1);
                bitsCount++;
            }
            ans.push_back(bitsCount);
        }
        return ans;
    }
};
