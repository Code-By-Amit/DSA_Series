class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq1[26] = {0};
        for(int i=0;i<s1.size();i++){
            freq1[s1[i] - 'a']++;
        }

        int windowSize = s1.size();

        for(int i=0; i<s2.length(); i++){
            int winInd = 0, idx = i;
            int winFreq[26] = {0};

            while(idx < s2.length() && winInd < windowSize){
                winFreq[s2[idx] - 'a']++;
                winInd++, idx++;
            }
            if(isFreqSame(freq1,winFreq)){
                return true;
            }
        }

        return false;
    }
};
