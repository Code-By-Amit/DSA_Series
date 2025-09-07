class Solution {
public:
    string finalString(string s) {
        string ans;

        for(int i=0; i<s.length();i++){
            char ch = s[i];
            if(ch != 'i'){
                ans += ch;
            }else{
                int st = 0;
                int end = ans.length()-1;
                while(st<=end){
                    swap(ans[st++],ans[end--]);
                }
            }
        }
        return ans;
    }
};
