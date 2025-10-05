class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> map1;
        unordered_map<string,int> map2;

        for(string str: words1) map1[str]++;

        for(string str: words2){
            if(map1.find(str) != map1.end()){
                map2[str]++;
            }
        } 
        int count = 0;
        for(auto p : map2){
            if(map1[p.first] == 1 && p.second == 1) count++;
        }
        return count;
    }
};
