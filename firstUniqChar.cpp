class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        queue<int> q;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(map.find(ch) == map.end()){
               q.push(i);
            }
            map[ch]++;
            while(!q.empty() && map[s[q.front()]] > 1){
               q.pop();
            }
        }

        return q.empty() ? -1 : q.front();
    }
};
