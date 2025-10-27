class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken_keys;
        int n = text.size();
      
        for(char ch: brokenLetters) broken_keys.insert(ch); // at most 26 character 
      
        int ans = 0;
        for(int i=0; i<n;i++){  // O(n) 
            bool isTypable = true;

            // loop for each word 
            while(i<n && text[i] != ' '){ 
                char ch = text[i];
                if(broken_keys.count(ch)) isTypable = false;
                i++;
            }
            if(isTypable) ans+=1; // check if each word is typable or not
        }
        return ans;
    }
};
