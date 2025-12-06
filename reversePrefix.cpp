class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = -1;
        for(int i=0; i<word.size();i++){
            if(word[i] == ch){
                idx = i;
                break;
            };
        }
        if(idx == -1) return word;

        int left = 0; 
        int right = idx;
        while(left < right){
            swap(word[left++], word[right--]);
        }
        return word;
    }
};
