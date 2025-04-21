class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans;
        string word;
        int aCount = 1;
        int n = sentence.size();
        for (int i = 0; i < n; i++) {
            while (i < n && sentence[i] != ' ') word += sentence[i++];
            char ch = word[0];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                word += "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }
            for (int j = 0; j < aCount; j++) word += 'a';
            ans += ' ' + word;
            word = "";
            aCount++;
        }
    return ans.substr(1);
}
};
