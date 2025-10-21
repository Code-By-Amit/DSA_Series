class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1) return 1;
        
        int start = 0;
        int end = 0;

        unordered_map<char,int> map;
        int max_len = 0;
        for(end=0; end<s.size();end++){
            char ch = s[end];

            if(map.count(ch) && map[ch] >= start){
                start = map[ch]+1; 
            }
            map[ch] = end; 

            int current_length = end - start + 1;
            cout << current_length << " ,";
            max_len = max(max_len, current_length);
        }
        return max_len;
    }
};
