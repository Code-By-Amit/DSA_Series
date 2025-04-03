class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";
    string result = strs[0];
    for(int i =1; i<strs.size(); i++){
        if(strs[i].length()==0) return "";
        for(int s=0; s<strs[i].length();s++){
            if(strs[i][s] != result[s]){
                result = result.substr(0,s);
                break;
            }
            if(strs[i].length()<result.length() && result.find(strs[i]) == 0){
                result = strs[i];
            }
        }
    }
    return result;
}
};
