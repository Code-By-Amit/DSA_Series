// First Way:  Time: O(n log n) | Space: O(1) (excluding sorting space)
class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()) return false;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s == t;
   }
};

// Second Way: Time: O(n) | Space: O(1) – only lowercase letters
class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length() != t.length()) return false;
      int freq1[26] = {0};
        int freq2[26] = {0};

        for(char ch:s) freq1[ch-'a']++;
        for(char ch:t) freq2[ch-'a']++;
        
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};

// Third Way: Time: O(n log n) | Space: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length() != t.length()) return false;
        map<char, int> m1,m2;
        for(char ch : s) m1[ch]++;
        for(char ch: t) m2[ch]++;
        return m1 == m2;
    }
};

// Fourth Way: Time: O(n) average | Space: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> m1,m2;
        for(char ch : s) m1[ch]++;
        for(char ch: t) m2[ch]++;
        return m1 == m2;
    }
};
