class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq1;

        for (int i = 0; i < s1.size(); i++) {
            string word = "";
            while (i < s1.size() && s1[i] != ' ') word += s1[i++];
            if (!word.empty()) freq1[word]++;
        }

        for (int i = 0; i < s2.size(); i++) {
            string word = "";
            while (i < s2.size() && s2[i] != ' ') word += s2[i++];
            if (!word.empty()) freq1[word]++;
        }

        vector<string> ans;

        for (auto p : freq1) {
            if (p.second == 1) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};
