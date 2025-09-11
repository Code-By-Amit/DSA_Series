// Time Complexity O(n) || Space Complexity O(1) 
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result =0;
        for (char ch : s) {
            result ^= ch;
        }
        for (char ch : t) {
           result ^= ch;
        }
        return result;
    }
};


// Time Complexity O(n) || Space Complexity O(k) k= no of letters in alphabet 
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> s_char;

        for (char ch : s) {
            s_char[ch]++;
        }
        for (char ch : t) {
            if (s_char[ch] > 0) {
                s_char[ch]--;
            } else {
                return ch;
            }
        }
        return ' ';
    }
};
