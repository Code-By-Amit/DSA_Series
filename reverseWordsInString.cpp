class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.length();

        reverse(s.begin(),s.end());
        for(int i=0; i<s.length();i++){
            string word = "";
            while(i<n && !isspace(s[i])){
                word += s[i++];
            }
            reverse(word.begin(), word.end());
            if(word.length()>0){
                 ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
