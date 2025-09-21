// Time Complexity: O(n) || Space Complexity: O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mapST;
        unordered_map<char,char> mapTS;

        for(int i =0 ;i<s.size();i++){
            if(mapST.count(s[i]) && mapST[s[i]] != t[i]) return false;
            if(mapTS.count(t[i]) && mapTS[t[i]] != s[i]) return false;
               mapST[s[i]] = t[i];
               mapTS[t[i]] = s[i];
        }
        return true;
    }
};
