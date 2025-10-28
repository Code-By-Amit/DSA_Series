class Solution {
public:
    void casePermutation(vector<string>& ans, string &str, int idx) {
        if (idx == str.size()) {
            ans.push_back(str);
            return;
        }

        if (isalpha(str[idx])) {   
            str[idx] = tolower(str[idx]);
            casePermutation(ans, str, idx + 1);
            str[idx] = toupper(str[idx]);
            casePermutation(ans, str, idx + 1);
        } else {  
            casePermutation(ans, str, idx + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        casePermutation(ans, s, 0);
        return ans;
    }
};
