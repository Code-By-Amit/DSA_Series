class Solution { // TC O(m+n) || SC O(m+n)
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1;
        string str2;
        for(int i=0; i < word1.size(); i++){
            str1 += word1[i];
        }
        for(int i=0; i < word2.size(); i++){
            str2 += word2[i];
        }
        return str1 == str2;
    }
};


// Optimized Space Complexity || SC O(1)
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i1=0,j1=0;
        int i2=0,j2=0;

        while(i1< word1.size() && i2 < word2.size()){
            if(word1[i1][j1] != word2[i2][j2]) return false;
            j1++; j2++;
            if(j1 >= word1[i1].size()){ j1=0; i1++; }
            if(j2 >= word2[i2].size()){ j2=0; i2++; }
        }
        return i1 ==  word1.size() && i2 == word2.size();
    }
};
