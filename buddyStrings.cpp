// TC: O(n) || SC: O(1)
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        vector<int> freq(26, 0);
        vector<int> mismatch;

        if (s == goal) {
            for (char ch : s) {
                freq[ch - 'a']++;
                if (freq[ch - 'a'] > 1) return true;
            }
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                mismatch.push_back(i);
        }

        if (mismatch.size() != 2)
            return false;
        int i = mismatch[0];
        int j = mismatch[1];
        swap(s[i], s[j]);
        return s == goal;
    }
};
