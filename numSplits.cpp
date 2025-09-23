// Time Complexity: O(n) || Space Complexity: O(1)
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int count = 0;
        vector<int> freqL(26,0);
        vector<int> freqR(26,0);

        for(int i =1; i<n;i++) freqR[s[i]-'a']++;
        int rightUniqueCount = 0;
        for(int n:freqR) if(n>0) rightUniqueCount++;

        int leftUniqueCount = 1;
        freqL[s[0] - 'a']++;

        for(int i=1;i<n;i++){
            if(leftUniqueCount == rightUniqueCount) count++;
            int idx = s[i] - 'a';
            freqR[idx]--;
            if(freqR[idx] == 0) rightUniqueCount--;
            freqL[idx]++;
            if(freqL[idx] == 1) leftUniqueCount++;
        }
        return count;
    }
};


// Alternative Using Map with same tc and sc
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int count = 0;
        unordered_map<char,int> mapL;
        unordered_map<char,int> mapR;
        for(int i=1;i<n;i++) mapR[s[i]]++;
        mapL[s[0]]++;

        int leftUniqueCount = 1;
        int rightUniqueCount = mapR.size();

        for(int i=1;i<n;i++){
            if(leftUniqueCount == rightUniqueCount) count++;
            char ch = s[i];

            mapR[ch]--;
            if(mapR[ch] == 0) mapR.erase(ch);

            mapL[ch]++;
            if(mapL[ch] == 1) leftUniqueCount++;

            leftUniqueCount = mapL.size();
            rightUniqueCount = mapR.size();
        }

        return count;
    }
};



