class Solution {
public:
    void generate(vector<string> &ans, string  &str, int opening, int closing, int n) {
        if (opening + closing == n * 2) {
            ans.push_back(str);
            return;
        }

        // opening bracket choice
        if (opening < n) {
            str.push_back('(');
            generate(ans, str, opening + 1, closing, n);
            str.pop_back();
        }
        if (closing < opening) {
            str.push_back(')');
            generate(ans, str, opening, closing + 1, n);
            str.pop_back();
        }
    }

 vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string str = "";
    generate(ans,str,0,0,n);
    return ans;
   }
};
