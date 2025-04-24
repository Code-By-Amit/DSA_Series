class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> freq;
        unordered_set<int> s;

        for(int val: arr){
             freq[val]++;
        }

        for(auto pair: freq){
            if(s.find(pair.second) != s.end()) return false;
            s.insert(pair.second);
        }

        return true;
    }
};
