class Solution {
public:
    bool isLetter(char ch){
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int st = 0;
        int end = s.length()-1;

        while(st<=end){
            if(!isLetter(s[st])){
                st++;
            }else if(!isLetter(s[end])) {
                end--;
            }else{
                swap(s[st++],s[end--]);
            }
        }
        return s;
    }
};
