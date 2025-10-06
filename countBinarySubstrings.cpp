class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> arr;
        for(int i=0; i<s.size();i++){
            int count = 1;
            while(i < s.size() && s[i] == s[i+1]){
                 i++;
                 count++;
            }
            arr.push_back(count);
        }

        int total = 0;
        for(int i=0; i<arr.size()-1;i++){
            cout << arr[i] << " " ;
            total += min(arr[i], arr[i+1]);
        }
        return total;
    }
};
