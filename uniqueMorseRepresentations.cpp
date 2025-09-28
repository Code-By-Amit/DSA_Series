// n = number of words  || m = average length of each word
// Time Complexity = O(n * m) ||  Space Complexity = O(n * m)

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[] = {".-","-...","-.-.","-..",".","..-.","--.","....",
        "..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...",
        "-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> set;

        for(int i=0;i<words.size();i++){
            string str;
            for(int j=0;j<words[i].size();j++){
                char ch = words[i][j];
                str += codes[ch - 'a'];
            }
            set.insert(str);
        }
        return set.size();
    }
};
