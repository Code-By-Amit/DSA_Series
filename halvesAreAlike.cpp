class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int st = 0;
        int end = s.size()-1;
        int mid = st + (end-st)/2;

        int vowel1 = 0;
        int vowel2 = 0;

        for(int i=0; i<=mid; i++) if(isVowel(s[i])) vowel1++;
        for(int i=mid+1; i<s.size(); i++) if(isVowel(s[i])) vowel2++;

        return vowel1 == vowel2;
    }
};
