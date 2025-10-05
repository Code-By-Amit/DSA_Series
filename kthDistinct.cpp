class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        for(string ch: arr) map[ch]++;

        for(int i=0; i<arr.size();i++){
            string str = arr[i];
            if(map[str] == 1) k--;
            if(k == 0) return str;
            
        }
        return "";
    }
};
