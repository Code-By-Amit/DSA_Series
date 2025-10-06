class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int idx = 0;
        for(string word : words){
            for(char ch : word){
                if(idx == s.size() || s[idx++]  != ch) return false;
            }
                if(idx == s.size()) return true;
        }
        return false;
    }
};
