
// Time complexity: O(n) || Space Complexity: O(1)
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> map;
        for(auto ch :s) map[ch]++;
        int count = 0;
        bool isOddFound = false; 
        for(auto p: map){
            if(p.second %2 == 0){
                count+=p.second;
            }else{
               count += (p.second / 2) *2;
               isOddFound = true;
            }
        }

        if(isOddFound) count++;
        return count;
    }

};
