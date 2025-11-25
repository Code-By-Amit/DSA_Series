class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length() + word2.length();
        string ans;
    
        int i=0,j=0;

        while(i + j < word1.size() + word2.size()){
            if(i<word1.size()){
                ans += word1[i++];
            } 
            if(j < word2.size()) {
                ans+= word2[j++] ;
            }
        }
        return ans;
    }
};
