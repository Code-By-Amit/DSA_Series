// Time Complixity O(n * k) || Space complexity: O(n * k)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(auto str: strs){
            vector<int> freq(26,0);
            for(char ch : str){
                int index = ch - 'a';
                freq[index]++;
            }

            string key;
            for(int f:freq){
                key += to_string(f) + '#';
            }
            map[key].push_back(str);
        }

        vector<vector<string>> result;
        for(auto p:map){
            result.push_back(p.second);
        }

        return result;
    }
};

// Time Complixity O(n * k log k) || Space complexity: O(n * k)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> map;

        for(auto str: strs){
            string key = str;
            sort(key.begin(),key.end());
            map[key].push_back(str);
        }

        vector<vector<string>> result;
        for(auto p: map){
            result.push_back(p.second);
        }
        return result;
    }
};
