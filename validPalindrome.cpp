class Solution {
public:
    bool isPllaindrom(string s, int left , int right){
        int lp = left;
        int rp = right;
        while(lp<=rp){
            if(s[lp] != s[rp]) return false;
            lp++; rp--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        if(s.size() <= 1) return true;
        string str;

         int lp = 0;
        int rp = s.size()-1;
        while(lp<=rp){
            if(s[lp] == s[rp]){
              lp++; rp--;
            }else{
                return  isPllaindrom(s, lp+1,rp) || isPllaindrom(s, lp, rp-1);
            }
        }
        return true;
    }
};
