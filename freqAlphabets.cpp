class Solution {
public:
    string freqAlphabets(string s) {
        string ans;

        for(int i=0; i<s.size();i++){
           if(i+2 < s.size() && s[i+2] == '#' ){
            char ch = (s[i] - '0') * 10 + (s[i+1] - '0') + 'a' - 1;
            ans+=ch;
            i+=2;
           }else{
            char ch = s[i] - '0' + 'a' - 1;
            ans+=ch;
           }
        }
        return ans;
    }
};
