class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        int idx = 0;
        string word = "";
        for(int i= 0; i<s.size(); i++){
            while(i < s.size() && s[i] != ' '){
            word.push_back(s[i++]);
            }
            if(!word.empty()){
                char ch = pattern[idx];
                
            if (p2w.count(ch) && p2w[ch] != word) return false;
            if (w2p.count(word) && w2p[word] != ch) return false;

                p2w[ch] = word;
                w2p[word] = ch;
                word = "";
                idx++;
            }
        }

    
        return idx == pattern.size();
    }
};
