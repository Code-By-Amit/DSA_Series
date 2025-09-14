// Time Complexity: O(n) || Space Complexity: O(n) -> here space is optimal
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;
        vector<string> v(numRows);

        int row_num = 0;
        int pm = 1;
        for(int i=0;i<s.size();i++){
            v[row_num] += s[i];

            if(row_num == 0) pm = 1;
            if(row_num == numRows-1) pm = -1;
            row_num += pm;
        }
        string result;
        for(auto r: v) result += r;
        return result;
    }
};


// Time Complexity: O(n) || Space Complexity: O(2n)
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;
        vector<vector<char>> v(numRows);
        int row_num = 0;
        int pm = 1;
        for(int i=0;i<s.size();i++){
            if(row_num == 0) pm = 1;
            if(row_num == numRows-1) pm = -1;
            v[row_num].push_back(s[i]);
            row_num += pm;
        }
        string result = "";
        for(int i=0; i<v.size();i++){
            for(int j=0; j<v[i].size();j++){
                result += v[i][j];
            }
        }
        return result;
    }
};
