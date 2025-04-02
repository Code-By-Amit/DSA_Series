class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCaseCount = 0;
        int n = word.length();
        for(int i=0;i<n;i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                upperCaseCount++;
            }
        }
        if(upperCaseCount == n || upperCaseCount== 0 ||
         (word[0] >= 'A' && word[0] <= 'Z' && upperCaseCount==1)){
            return true;
         }
         return false;
    }
};
