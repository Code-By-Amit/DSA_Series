// Time Complexity: O(n*m) || Space Complexity: O(1) 
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26);
        vector<string> result;
        for (int i = 0; i < words[0].size(); i++) {
            char ch = words[0][i];
            freq[ch - 'a']++;
        }

        int n = words.size();
        for (int i = 1; i < n; i++) {
            vector<int> currentFreq(26);
            for (int j = 0; j < words[i].size(); j++) {
                char ch = words[i][j];
                currentFreq[ch - 'a']++;
            }

            for (int k = 0; k < 26; k++) {
                freq[k] = min(freq[k], currentFreq[k]);
            }
        }

         for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
              for (int j = 0; j < freq[i]; j++) {
                    char ch = 'a' + i;
                    result.push_back(string(1, ch));
                }
              }
            }

        return result;
    }
};
