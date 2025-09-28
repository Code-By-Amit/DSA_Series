class Solution {
public:
    int maxDepth(string s) {

        int maxDepth = 0;
        int openingBracket = 0;
        
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == '('){
                openingBracket+=1;
                maxDepth = max(maxDepth,openingBracket);
            }else if(ch == ')'){
                openingBracket-=1;
            }
        }
        return maxDepth;
    }
};
