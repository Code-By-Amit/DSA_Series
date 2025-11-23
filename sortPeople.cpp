class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> arr;
        for(int i=0; i<names.size();i++){
            arr.push_back({heights[i],names[i]});
        }

        sort(arr.begin(), arr.end(), greater<>());

        vector<string> ans;

        for(auto p: arr){
            ans.push_back(p.second);
        }
        return ans;
    }
};
