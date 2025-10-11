class Solution {
public:
    bool isPalindrom(string s){
        int st = 0;
        int end = s.size()-1;

        while(st<=end){
            if(s[st] == s[end]) {
                st++;
                end--;
            }else  return false;
        }

        return true;
    }
    void getAllPartation(string s, vector<string> &partition, vector<vector<string>> &ans){
        if(s.size() == 0){
            ans.push_back(partition);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPalindrom(part)){
                partition.push_back(part);
                getAllPartation(s.substr(i+1),partition, ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        getAllPartation(s,partition,ans);
        return ans;
    }
};
