// Time: O(n) → one pass through string
// Space: O(1) 

class Solution {
public:
    int balancedStringSplit(string s) {
        int pm = 0;
        int count = 0;
        for(auto ch:s){
            if(ch == 'R') pm++;
            else pm--;
            if(pm == 0) count++;
        }
        return count;
    }
};
