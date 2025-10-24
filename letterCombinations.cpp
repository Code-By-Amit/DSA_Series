// Time Complexity: O(4^n) || Space Complexity: O(n)
class Solution {
public:
    vector<string> keypad = {"",    "",    "abc",  "def", "ghi",
                             "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void letterCombination(vector<string>& ans, string &digits, int idx, string& str) {
        if (digits.size() == idx) {
            ans.push_back(str);
            return;
        }
        char digit = digits[idx];

        for (char ch : keypad[digit - '0']) {
            str.push_back(ch);
            letterCombination(ans, digits,idx+1, str);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> ans;
        string str;
        letterCombination(ans, digits,0, str);
        return ans;
    }
};
