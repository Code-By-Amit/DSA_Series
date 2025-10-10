class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> map;

        for(char ch : s) map[ch]++;

        int max_odd_freq = INT_MIN;
        int min_even_freq = INT_MAX;
    
        for(auto p: map){
            if(p.second %2 == 0){
                min_even_freq = min(min_even_freq, p.second);
            }else{
                max_odd_freq = max(max_odd_freq, p.second);
            }
        }

        return max_odd_freq - min_even_freq;
    }
};
