class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str;
         
        for(string word: words){
             str += word[0];
        }
        return str == s;
    }
};
