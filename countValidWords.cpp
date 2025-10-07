class Solution {
public:
    int countValidWords(string sentence) {
        int validCount = 0;
        int n = sentence.size();

        for (int i = 0; i < n; i++) {
            string word;
            while (i < n && sentence[i] != ' '){
                word += sentence[i++];
            }
            
                if(word.empty()) continue;

                int isValid = true;
                int hyphenCount = 0;

            for (int j = 0; j < word.size(); j++) {
                int m = word.size();
                // check lowercase letters only
                if (isupper(word[j]) || isdigit(word[j])) {
                    isValid = false;
                     break;
                }

                // Check hypens
                if(word[j] == '-'){
                    hyphenCount++;
                   if(j == 0 || j == m-1 || !islower(word[j-1]) || !islower(word[j+1]) || hyphenCount > 1) {
                        isValid = false; break;
                    }
                }
                
                    // Punctuation 
                    if(word[j] == '!' || word[j] == '.' || word[j] == ','){
                        if(j != m-1){ isValid=false; break;   }
                    }
                
            }
            if(isValid) validCount++;
        }
        return validCount;
    }
};
