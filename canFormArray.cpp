// Time Complexity: O(n) || Space Complexity: O(n)
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {

        unordered_map<int, vector<int>> map;

        for(auto piece: pieces){
            map[piece[0]] = piece;
        }

        for(int i =0; i<arr.size();i++){
            if (map.find(arr[i]) == map.end()) return false;
            vector<int> piece =  map[arr[i]];
            int k = 0;
            while(k<piece.size()){
                if(arr[i++] != piece[k++]) return false;
            }
            i--;
        }
        return true;
    }
};
