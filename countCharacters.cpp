class Solution {
public:
    bool compareFreq(vector<int> &freq, vector<int> &freq2){
        for(int i=0;i<26;i++){
            if(freq[i] < freq2[i]) return false;
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(char ch : chars) freq[ch - 'a']++;

        int count = 0;

        for(string word: words){
            vector<int> freq2(26,0);
            for(char ch: word) freq2[ch - 'a']++;
            if(compareFreq(freq,freq2)) count += word.size();
        }

        return count;
    }
};
