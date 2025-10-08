
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        for(char ch : t) need[ch] ++;


        unordered_map<char,int> window_count;

        int n = t.size();
        int have = 0;
        int min_length = INT_MAX;
        int start_index = 0;

        int st = 0;
        string ans;

        for(int end = 0;end<s.size();end++){
            char ch = s[end];

            window_count[ch]++;

            // compare only when ch is present in need
            if(need.count(ch) && window_count[ch] == need[ch]) have++; 

            while(have == need.size()){
                if(end-st+1<min_length){
                    min_length =  end-st+1;
                    start_index = st;
                }
                char ch2 = s[st++];
                window_count[ch2]--;
                if(need.count(ch2) &&  window_count[ch2] < need[ch2]) have--;
            }
        }

         return min_length == INT_MAX ? "" : s.substr(start_index, min_length);
    }
};
