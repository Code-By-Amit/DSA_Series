//Time: O(n) + O(n) ≈ O(n)
// Space: O(n) (kyunki doubled string ban gaya)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false; // Goal and S shoud be equal 
        s+=s;  // O(n)
        if(s.find(goal) < s.size()) return true;
        return false;
    }
};
