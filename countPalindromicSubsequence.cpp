class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<int> letters;
        int result = 0;
        
        for(char ch: s) letters.insert(ch);

        for(char letter : letters){
            int left_idx = -1;
            int right_idx = -1;

            for(int i=0; i<s.size(); i++){
                if(s[i] == letter){
                    if(left_idx == -1){
                        left_idx = i;
                    }
                    right_idx = i;
                }
            }


            unordered_set<int> set;

            for(int i= left_idx+1; i<right_idx ; i++){
                set.insert(s[i]);
            }
            result+=set.size();
        }

        return result;
    }
};
