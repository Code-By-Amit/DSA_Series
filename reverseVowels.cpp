class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int st = 0;
        int end = s.length() - 1;
        while (st <= end) {

            if (!isVowel(s[st])) {
                st++;
            } else if (!isVowel(s[end])) {
                end--;
            } else {
                swap(s[st++], s[end--]);
            }
        }
        return s;
    }
};
